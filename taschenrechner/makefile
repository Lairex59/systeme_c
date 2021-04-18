taschenrechner: testprog.o stack.o
	gcc -o taschenrechner testprog.o stack.o
testprog.o: testprog.c stack.h
	gcc -c -o testprog.o testprog.c
stack.o: stack.c
	gcc -c -o stack.o stack.c
clean: 
	rm -f *.o
cleanall:
	rm *.o taschenrechner
