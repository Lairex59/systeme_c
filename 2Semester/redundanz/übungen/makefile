Paritaet: ParitaetMain.o Generator.o Codierung.o Fehlerteufel.o Decodierung.o 
	gcc -o Partitaet ParitaetMain.o Generator.o Codierung.o Fehlerteufel.o Decodierung.o

ParitaetMain.o: ParitaetMain.c 
	gcc -c -o ParitaetMain.o ParitaetMain.c

Generator.o: Generator.c
	gcc -c -o Generator.o Generator.c

Codierung.o: Codierung.c
	gcc -c -o Codierung.o Codierung.c 

Fehlerteufel.o: Fehlerteufel.c
	gcc -c -o Fehlerteufel.o Fehlerteufel.c

Decodierung.o: Decodierung.c
	gcc -c -o Decodierung.o Decodierung.c 

clean:
	rm -f *.o

cleanall:
	rm -f *.o Paritaet