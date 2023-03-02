res: markgrade.o student.o details.o
		gcc markgrade.o student.o details.o -o res

markgrade.o: markgrade.c student.c details.c
		gcc -c markgrade.c 

student.o: student.c 
		gcc -c student.c 

details.o:  details.c
		gcc -c details.c

clean: 
		rm *.o res
