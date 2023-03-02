output: mainbill.o sidebill.o 
		gcc mainbill.o sidebill.o -o output

mainbill.o: mainbill.c head.h 
		gcc -c mainbill.c

sidebill.o: sidebill.c
		gcc -c sidebill.c

clean:
		rm *.o output