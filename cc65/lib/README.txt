GENERAL
=======

cerberus.lib is essentially supervision.lib with the
addition of a CERBERUS tailored crt0.o (built from crt0.s)

It contains all the 'standard' functions you expect from a 
C compiler and the necessary startup code for a built
application.

BUILDING
========

supervision.lib needs to be copied to cerberus.lib first, then
run 'make' to assemble crt0.s into crt0.o and add it
to the library.

locations:
  Macintosh (brew):
    /usr/local/Cellar/cc65/2.19/share/cc65/lib/supervision.lib

