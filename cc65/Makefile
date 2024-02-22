65test.bin:	65test.o lib/cerberus.lib
		ld65 -C cerberus.cfg -m 65test.map -o 65test.bin 65test.o lib/cerberus.lib

65test.o:	65test.s
		ca65 --cpu 65c02 -o 65test.o 65test.s

65test.s:	65test.c
		cc65 -t none --cpu 65c02 -o 65test.s 65test.c

clean:
		rm -Rf *.o *.s *.map *.bin 

