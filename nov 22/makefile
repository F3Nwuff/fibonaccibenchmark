all: main_space_recursive.exe

main_space_recursive.exe: mylib.o
	gcc -o main_space_recursive main_space_recursive.c mylib.o

mylib.o: mylib/mylib.c
	gcc -o main_space_recursive.exe main_space_recursive.c mylib.o

clear:
	rm *.exe
	rm *.o