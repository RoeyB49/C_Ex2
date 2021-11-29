CC = gcc
FLAGS = -Wall -g
AR=ar 

all: connections 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
		
main.o: main.c my_mat.c 
	$(CC) $(FLAGS) -c main.c
	
connections: main.o my_mat.h my_mat.c
	$(CC) $(FLAGS) main.o my_mat.c -lm -o connections
	
.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections		
