CC=gcc
CFLAGS=-I. -std=c99

all : parallel_min_max zombie process_memory parallel_sum 

zombie : 
	$(CC) zombie.c -o zombie

parallel_sum : utils.o parallel_sum.c
	$(CC) -o parallel_sum parallel_sum.c utils.o -lpthread  $(CFLAGS)

process_memory : process_memory.c
	$(CC) -o process_memory process_memory.c $(CFLAGS)

parallel_min_max : utils.o find_min_max.o utils.h 
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h utils.c
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

clean :
	rm -f utils.o find_min_max.o parallel_min_max process_memory parallel_sum parallel_sum.o zombie
