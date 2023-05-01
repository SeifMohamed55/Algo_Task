#include "algo_head.h"
#include <stdio.h>
int main(){
    int x = non_recursive();
    printf("%d\n", x);
    x = recursive();
    printf("%d\n",x);
    return 0;
}
