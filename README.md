Nigels UTF8 functions.
======================

Two functions to aid in editing utf8 strings, by converting to and from UCS-4.

As a vector of 32bit code points you can add and delete characters freely without worrying about different 'glyphs' being different numbers of bytes.

C++ built in convertions seem hard to use or even depreciated. 🤨

See main.cpp for how to use. No rocket science here.

Credit
------
Based on two C routines writen by Jeff Bezanson. See ref directory for full copy of his routines. He did the hard part. 😁
