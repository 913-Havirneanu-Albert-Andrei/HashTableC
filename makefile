CC=gcc
CFLAGS=-g -Wall

all: app

hashTable.o: hashTable.c hashTable.h 
	$(CC) $(CFLAGS) -c hashTable.c

app: hashTable.o main.c
	$(CC) $(CFLAGS) -o app main.c hashTable.o

clean:
	rm *.o