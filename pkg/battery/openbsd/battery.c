#include <fcntl.h>
#include <machine/apmvar.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

#include "battery.h"
#include "openbsd.h"


int
getbatterylife(char* buf, size_t len)
{
  struct apm_power_info info;
  
  int apm_fd = open("/dev/apm", O_RDONLY);
 
  if (ioctl(apm_fd, APM_IOC_GETPOWER, &info) == -1) return cleanup(apm_fd, 1);
  if (info.battery_state == APM_BATTERY_ABSENT || info.battery_state == APM_BATT_UNKNOWN) return cleanup(apm_fd, 1);

  snprintf(buf, len, "%d", info.battery_life);
  
  return cleanup(apm_fd, 0);
}

int
getchargestate(char* buf, size_t len)
{
  struct apm_power_info info;
  
  int apm_fd = open("/dev/apm", O_RDONLY);
 
  if (ioctl(apm_fd, APM_IOC_GETPOWER, &info) == -1) return cleanup(apm_fd, 1);
  if (info.battery_state == APM_BATTERY_ABSENT || info.battery_state == APM_BATT_UNKNOWN) return cleanup(apm_fd, 1);

  switch (info.battery_state)
  {
    case APM_BATT_CHARGING:
      snprintf(buf, len, CHARGE_BATT);
      break;
  
    default:
      if (info.battery_life >= 75) snprintf(buf, len, HIGH_BATT);
      else if (info.battery_life >= 50) snprintf(buf, len, MED_BATT);
      else if (info.battery_life >= 25) snprintf(buf, len, LOW_BATT);
      else snprintf(buf, len, CRIT_BATT);
      
      break;
  }

  return cleanup(apm_fd, 0);
}

static int
cleanup(int apm_fd, int exitcode)
{
  close(apm_fd);
  return exitcode;
}
