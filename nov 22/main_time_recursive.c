#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main()
{
    int Z = 10;
    clock_t t;
    t = clock();
    int fibonaccirecursive(int Z);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
 
    printf("recursive methode took %f seconds to execute \n", time_taken);
    return 0;
}