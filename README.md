# Patchouli - Enchant Your DWM Wonderland!

![PatchouliDance1](https://media.tenor.com/5iY6DCQf8r8AAAAC/patchouli-knowledge-patchy.gif)

**Patchouli** is not just your ordinary status bar for Suckless dwm; it's your ticket to status bar nirvana. Written in a delightful blend of Go and C (mostly C, because we're hardcore like that), Patchouli doesn't just play by the rules of the UNIX philosophy – it makes them way cooler. We've got both your favorite OS families covered, with a primary focus on the BSD squad and a secondary nod to Linux, because we at Chansoft believe in equal opportunity awesomeness.

## What Makes Patchouli So Darn Special?

1. **Minimalism on Steroids:** Patchouli doesn't do bloat. It's like a Marie Kondo-approved status bar – only the essential sparks joy. At Chansoft, we firmly believe that more code doesn't necessarily mean better software. We keep things lean by minimizing the reliance on external libraries. You won't find an alphabet soup of dependencies here, just what the system provides and Go's standard library – ensuring a streamlined, lightweight status bar that won't weigh down your setup.

2. **Todd Howard Approved:** Because of all the effort we've put into Patchouli, you can rest easy knowing that Patchouli just works, and it works efficiently!

3. **Go Go Go (and C):** Our blend of Go and C makes Patchouli not just fast but "I just time-traveled" fast. While Go handles everyday tasks at lightning speed, we trust C to take care of the heavy lifting. Intensive computations are C's playground, ensuring Patchouli's speed remains as swift as a wizard's spell. With this dynamic duo, your status bar will be more efficient than ever.

4. **Real Magic, Real Hardware:** At Chansoft, we don't believe in virtual playpens or Docker sandboxes for such low-level sorcery. We like our magic the old-fashioned way – on real, tangible hardware. Our wizards craft Patchouli's code on real computers. You'll find us conjuring code spells on Alpine Linux, FreeBSD, NetBSD, and OpenBSD, all in the pursuit of magical perfection. But we don't stop at development; our testing happens on the very same real hardware, ensuring that Patchouli's incantations touch the essence of your system. We extend our real-world tests to both x86_64 and aarch64 ISA systems, covering a broad spectrum of magical devices. No smoke and mirrors here – just pure, unadulterated metal. Because that's how Patchouli rolls, and rolls like a wizard!

5. **Tidy, Tidy Code:** You know that feeling when you look at code and it's like staring into the Matrix? With Patchouli, we believe in keeping things crystal clear. We've chosen to use XCB instead of the older, more complex Xlib, resulting in code that's as readable as your favorite bedtime story.

6. **Powered by the Speedster Clang:** We don't mess around when it comes to our code. While some might still be stuck in the GNUslop era (yes, we're looking at you, GCC), we've opted for the sleek and lightning-fast Clang. Why? Because we believe in harnessing the power of LLVM to supercharge our C code. It's like trading in your trusty bicycle for a rocket ship — Patchouli's C code blasts off with Clang, leaving GNUslop in the dust, where it belongs!

7. **Flexing Wizard Musl:** When it comes to testing on Linux, we don't rely on just any ol' libc; we've got a wizard's favorite up our sleeves – musl libc. It's not just for show; there's real magic in this choice. Musl is a lightweight companion that doesn't weigh us down with unnecessary complexities. Its simplicity keeps our code nimble and secure. Musl loves POSIX as much as we do. It's a match made in POSIX heaven, ensuring our status bar stays true to its roots. Musl is our magical wand in the world of libc. With its help, Patchouli stays elegant and true to its minimalist spirit. So, when it's time for testing on Linux, we choose musl to weave our wizardry, keeping Patchouli both sleek and POSIX-strict.

8. **Your Layout, Your Way:** Inspired by the hands-on modular nature of dwm itself, Patchouli empowers you to customize your status bar layout effortlessly. With Patchouli's config.go, you can easily tailor the blocks to your liking, making Patchouli as flexible as your imagination. It's like having a wizard's spellbook to create the status bar of your dreams. Your layout, your rules, with Patchouli.

## Getting Started

Ready to dive into the magical world of Patchouli? Excellent, we're about to embark on a whimsical journey together!

### Installation: Magic in Motion

Patchouli knows how to take care of itself, and it's not shy about showing off its tricks. To make things run smoothly, we've concocted an ingenious installation process that balances your system's resources like a true wizard. Here's the spell:

1. **Prepare for Sorcery:** First, ensure that your dwm font is set to a Nerd Font. These glyphs are the secret ingredients for Patchouli's magical status bar.

2. **The Builder's Call:** Behold, the `builder` script! This trusty piece of magic automates the cross-platform compilation process with grace. Make it executable, and then, with the power of root privileges, execute `./builder install`.

3. **Auto-OS Detection:** The `builder` script is a true mind reader! It knows which of the four mighty OSes you're on (FreeBSD, OpenBSD, NetBSD, or Linux), and it even detects whether you're running musl libc on glibc-based Linux distributions. It then invokes the appropriate make commands for a seamless, OS-specific installation.

4. **Cleanse and Renew:** The magic doesn't end there. Your system will be cleansed of any lingering files from the compile, leaving your setup as pristine as a wizard's crystal ball.

This elegant installation process is just another way Patchouli makes your life easier and keeps your system's resources in check. So, let the magic happen!

### Configuration: Crafting Your Layout

Now, let's talk about shaping your status bar into the masterpiece you desire. Patchouli's configuration is as playful as a sprite dancing in a forest glen. Much like the revered dwm we build our status bar on top of, we use a `config.go` file, giving you full control to determine where your different status bar blocks are placed.

1. **Edit the Spellbook:** Open up the `config.go` file and let your creativity flow. You'll find a delightful collection of named functions like `NET`, `KEYMAP`, `DATE`, and `BATT`, each representing different status bar blocks. You can easily decide the order and placement of these blocks by modifying the `BLOCK` map.

2. **Your Layout, Your Magic:** With a few keystrokes and a flick of your wand (or keyboard), you can decide which status bar blocks appear in your layout. Simply reconfigure the `BLOCK` map to achieve the desired arrangement.

3. **Incantation of Change:** Once your status bar's blocks have been configured to your liking, simply recompile Patchouli using `./builder install`, and gracefully restart Xorg. Your changes will come to life like a wizard's spell taking form.

Patchouli gives you the power to shape your own status bar layout, with all the whimsy and creativity you desire. Your status bar, your magic, with Patchouli.

Now, go ahead and let the enchantment begin. Your Patchouli adventure awaits!

## Requirements

Before you embark on your Patchouli journey, make sure you've got the following essentials:

- clang
- go
- musl libc
- pkg-config/pkgconf
- Nerd Fonts

## Patch Notes

The magical journey of Patchouli is ever-evolving, and so are the tales in the enchanted scroll known as `patch-notes.txt`. This is where we document the evolution of Patchouli, highlighting new features, improvements, bug fixes, and more.

To keep up with the latest enchantments, visit our [Patch Notes](https://github.com/buckwheatlovesmistral/patchouli/blob/main/patch-notes.txt). Explore the mystical changes, and embark on your Patchouli adventure with the knowledge of what's been added or refined.

Stay informed and witness the magic unfold!

## License

Alright, let's talk legal stuff for a moment. Patchouli is licensed under the [AGPL 3.0](https://github.com/buckwheatlovesmistral/patchouli/blob/main/LICENSE), because we believe in sharing the magical goodness. In a nutshell, it means you're free to use, modify, and distribute Patchouli as long as you keep the magic flowing and share your changes with others.

**Now, grab your wizard hat, sprinkle some coding magic, and let's Patchouli-fy your dwm setup!**

![PatchouliDance2](https://media.tenor.com/u2unDcISbw4AAAAC/patchouli-touhou.gif)
