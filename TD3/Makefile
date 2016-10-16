CC=gcc
CFLAGS=-c


test : main.o matrice_calcul.o matrice_io.o alloc.o
	$(CC) -o test main.o matrice_calcul.o matrice_io.o alloc.o

main.o : main.c
	$(CC) $(CFLAGS) main.c

matrice_calcul.o : matrice_calcul.c matrice_calcul.h
	$(CC) $(CFLAGS) matrice_calcul.c

matrice_io.o:matrice_io.c matrice_io.h 
	$(CC) $(CFLAGS) matrice_io.c

alloc.o: alloc.c alloc.h
	$(CC) $(CFLAGS) alloc.c
clean:
	rm -rf *.o
mrproper: clean
	rm -rf test
