CC=gcc
ARGS=-ansi -std=c99 -Wall -g
ZIEL=taschenrechner
OBJECT1=testprog.o stack.o
CLEAN=rm -f

$(ZIEL): $(OBJECT1)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECT1)
testprog.o: testprog.c stack.h
	$(CC) -c -o testprog.o testprog.c
stack.o: stack.c
	$(CC) -c -o stack.o stack.c
clean:
	$(CLEAN) $(OBJECT1)
cleanall: 
	$(CLEAN) $(OBJECT1) $(ZIEL)
