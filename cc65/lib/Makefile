cerberus.lib:	crt0.o
		ar65 a cerberus.lib crt0.o

crt0.o:		crt0.s
		ca65 --cpu 65c02 -o crt0.o crt0.s

