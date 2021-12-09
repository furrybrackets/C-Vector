CC=gcc
FLAGS=-W

test: test.o vector.o
	$(CC) test.o vadd.o vinit.o vector.o vpop.o vget.o -o run $(FLAGS)

vector.o: vector.c
	$(CC) vector.c -c

test.o: tests/test.c
	$(CC) tests/test.c -c

clean:
	rm *.o