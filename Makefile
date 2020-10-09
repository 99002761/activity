# Makefile - Version 1

# Regular compilation command, just as it would be written on
# the command line
fibmake: fibmake.c fibfunc.c
	gcc -o fibmake fibmake.c fibfunc.c

# Target to clean files created during compilation
clean:
	rm -f *.o fibmake Makefile
	mv Makefile.orig Makefile
