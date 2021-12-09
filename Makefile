CC=gcc
FLAGS=-W

test: test.o vadd.o vinit.o vector.o vpop.o
	$(CC) test.o vadd.o vinit.o vector.o vpop.o -o run $(FLAGS)

vector.o: vector.c
	$(CC) vector.c -c

test.o: tests/test.c
	$(CC) tests/test.c -c

vinit.o: tests/vinit.c
	$(CC) tests/vinit.c -c

vadd.o: tests/vadd.c
	$(CC) tests/vadd.c -c

vpop.o: tests/vpop.c
	$(CC) tests/vpop.c -c

clean:
	rm vector.o vinit.o run