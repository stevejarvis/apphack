CC=/usr/bin/g++
OPTS=-g

all: main.cc makefile
	$(CC) main.cc $(OPTS) -o main

clean:
	rm *.o main
