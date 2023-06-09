#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
/*
 * non_recusive - takes input from user and returns the most occurred number in the array if more than half of it
 *
 * Returns: The most occurred number in the array if (it occurred more than half the size of array)
 *          returns: INT_MIN otherwise
*/

/*
  Time complexity:
∑i=0 to n 1
= n – 0 + 1
= O(n)
 Space complexity: O(1) The size is constant for all inputs.
 */
int non_recursive(){
    int size = (int)(5 * pow(10, 4));
    int *freq = malloc(size * sizeof(int));
    int small_array_size,x;

    for (int i = 0; i < size; ++i){ //O(n)
        freq[i] = 0;
    }
    printf("Enter the size of array\n");
    scanf("%d",&small_array_size);

    for (int i = 0; i < small_array_size; ++i) { //
        scanf("%d", &x);
        freq[x]++;
    }
    int mx = INT_MIN;
    int num = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (mx < freq[i] ){
            mx = freq[i];
            num = i;
        }
    }
    if (mx > small_array_size/2)
    {
        free(freq);
        return num;
    }
    free(freq);
    return INT_MIN;

}

