#include "stdio.h"

int fibonacciitterative(int Z){
    int x = 0 , y = 1 , z , a ;
    for (a = 0; a < Z; a++)
  {
    if (a <= 0)
        z = a;
    else
    {
        z = x + y;
        x = y ;
        y = z;
    }
  }
  return z;
}

int fibonaccirecursive(int Z){
    int result;
    if (Z == 0){
        return 0;
    }
    else if (Z == 1){
        return 1;
    }
    else if (Z>1){
        return fibonaccirecursive(Z-1)+fibonaccirecursive(Z-2);
    }
}