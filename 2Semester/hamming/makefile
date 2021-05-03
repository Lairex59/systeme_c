CC=gcc
ARGS=-ansi -std=c99 #-Wall -O 
ZIEL=redundanz
OBJECT0=main_redundanz.c
OBJECT1=generator.c
OBJECT2=codierung.c
OBJECT3=fehlerteufel.c
OBJECT4=decodierung.c
CLEAN=rm -f

$(ZIEL): $(OBJECT0) $(OBJECT1) $(OBJECT2) $(OBJECT3) $(OBJECT4)
	$(CC) $(ARGS) -o $(ZIEL) $(OBJECT0) $(OBJECT1) $(OBJECT2) $(OBJECT3) $(OBJECT4)

main_redundanz.o: main_redundanz.c redundanz.h
	$(CC) -c $(ARGS) -o main_redundanz.o main_redundanz.c

generator.o: generator.c
	$(CC) -c $(ARGS) -o generator.o generator.c

codierung.o: codierung.c
	$(CC) -c $(ARGS) -o codierung.o codierung.c

fehlerteufel.o: fehlerteufel.c
	$(CC) -c $(ARGS) -o fehlerteufel.o fehlerteufel.c

decodierung.o: decodierung.c
	$(CC) -c $(ARGS) -o decodierung.o decodierung.c

clear:
	$(CLEAN) $(ZIEL)
	
clearall:
	$(CLEAN) $(ZIEL) text\(generierter\).txt text\(codierter\).txt  text\(fehlerteufel\).txt text\(decodierter\).txt
