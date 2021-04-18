testprog: listen.o stack.o
	gcc -o testprog listen.o stack.o
testprog.o: stack.c stack.h
	gcc -o listen.o -c listen.c
stack.o: stack.c
	gcc -o stack.o -c stack.c
clean:
	rm -f *.o
cleanall:
	rm *.o testprog
