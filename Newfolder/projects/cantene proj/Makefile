total: bill.o admin.o food.o
		gcc bill.o admin.o food.o -o total

bill.o: bill.c cantene.h
		gcc -c bill.c 

admin.o: admin.c 
		gcc -c admin.c 

food.o: food.c 
		gcc -c food.c 

clean: 
		rm *.o total