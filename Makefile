CC=gcc
FLAGS=-W
BUILD_OUTPUT=tests/vector

test: test.o vector.o
	$(CC) test.o vector.o -o test $(FLAGS)

vector.o: vector.c
	$(CC) vector.c -c

test.o: tests/test.c
	$(CC) tests/test.c -c

clean:
	rm -f *.o
	rm -f test

build: clean vector.c vector.h 
	$(CC) vector.c -c -o $(BUILD_OUTPUT) $(FLAGS)