[Stackrip](https://stackrip.com) - RE Challenges
=====================

This repository aims to provide a set of simple reverse engineering challenges
with incrementing difficulty. These challenges will not harm your computer in
any way and source code is included for auditing + compilation purposes.

Each challenge tonains a linux + macos directory including an x86 & x64 bit
binary + PGP signature as well as the challenge's source code. **It is
recommended not to view the source code until after the challenge as been
completed**. If you get stuck, the source code is provided as well as a simple
writeup.

Flag validation is provided at [stackrip.com/flags/](https://stackrip.com/flags/).


Challenges
==========

**0000-unlockme** - Baby's first crackme. This program wants a password in exchange for a flag. Can you find that password?
 - Difficulty :: Extremely Easy
 - Recommended approach :: `rabin2 -z`
 - Writeup :: N/A

**0001-license** - The first challenge that requires analysis. The goal is to provide a valid username + license key.
 - Difficulty :: Easy
 - Recommended approach :: Static Analysis
 - Writeup :: Coming very soon


Contributing
============

If you have an idea for a crackme or a writeup, feel free to open an PR and I'll happily merge.
