# http://pirate.shu.edu/~minimair/assembler/Makefile
#
all: main

main.o : main.s
	as -o main.o main.s

main :  main.o
	gcc -o main main.o

run : main
	./main

edit:
	vim main.s

debug:
	gdb ./main

clean :
	@rm *.o  main
