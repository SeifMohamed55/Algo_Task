#include "algo_head.h"
#include <stdio.h>
/*
  Task 2: Majority Element
    (Find the Majority element of an array A[1 ... n]: An array is said to have a
    majority element if more than half of its entries are the same.)
 */
int main(){
    /*int x = non_recursive();
    printf("%d\n", x);*/
    int x = recursive();
    printf("%d\n",x);
    return 0;
}
