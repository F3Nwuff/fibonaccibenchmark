#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "mylib/mylib.h"

int main(void){
    int Z = 10;
    for (int i = 0; i <= Z; i++){
        printf("F(%d) = %d = %d\n", Z , fibonacciitterative(Z), fibonaccirecursive(Z));
    }
    return 0;
}