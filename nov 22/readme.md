to run it u need to type these commands in terminal

gcc -c mylib/mylib.c -o mylib.o
gcc -c main_test.c -o main.o
gcc -o main.exe main_test.o mylib.o
and ussually starts using ./main.exe

to use the bench mark change main_test.c into 
time iterative = main_time_itterative.c
time recursive = main_time_recursive.c
space iterative = main_space_itterative.c
space recursive = main_space_recursive.c

my benchmarks are:
time iterative = 0.000000 seconds
time recursive = 0.000000 seconds
time complexity the same
space iterative = 16-20% cpu , 0,3 mb
space recursive = 18-22% cpu , 0,3 mb
space complexity cpu is used more in recursive but has the same memory transfer of 0,3 mb

proof is in the photo folder