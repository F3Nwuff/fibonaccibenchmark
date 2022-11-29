#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
    int Z = 10;
    clock_t t;
    t = clock();
    int fibonacciitterative(int Z);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
 
    printf("itterative methode took %f seconds to execute \n", time_taken);
    return 0;
}