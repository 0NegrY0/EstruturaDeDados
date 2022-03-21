#Makefile padrão simplificado 1/1/1 (main/data/header)
#Escrito por Carlos Negri

$(CC) = gcc

final: main.o data.o
	$(CC) main.o data.o -o final -w

main.o: main.c data.h
	$(CC) -c main.c

data.o: data.c data.h
	$(CC) -c data.c

clean:
	rm *.o final