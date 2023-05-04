#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
/* Time complexity:
T(n) = T(n-1) + O(1)
 = T(n-2) + 2 * O(1)
 = T(n-3) + 3 * O(1)
 = ...
 = T(0) + n * O(1)
 = O(n)
 Space complexity: O(n) size of input array.
 */
//calculate the frequency array recursively
void recursive_frequency_array(int arr[], int small_array_size, int freq[]) {  //T(n) = T(n-1) -> O(n)
    if (small_array_size == 0) {
        return;
    }
    int first = arr[0];
    freq[first]++;
    recursive_frequency_array(arr + 1, small_array_size-1, freq);
}

//return the number if found and INT_MIN otherwise
int solve (int freq[], int small_array_size, int arr[])
{
    int mx = INT_MIN;
    int num = INT_MIN;

    for (int i = 0; i < small_array_size; ++i) {
        if (mx < freq[arr[i]] ){
            mx = freq[arr[i]]; //freq[arr[i]] number of repetition
            num = arr[i]; //number itself
        }
    }
    if (mx > small_array_size / 2)
    {
        return num;
    }
    return INT_MIN;
}

//drive function
int recursive() {
    int freq_size = (int)(5 * pow(10, 4));
    int *freq = malloc(freq_size * sizeof(int));
    int small_array_size;
    printf("Enter the size of array\n");
    scanf("%d", &small_array_size);
    int *arr =  malloc(small_array_size * sizeof(int));
    for (int i = 0; i < small_array_size; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < (int)(5 * pow(10, 4)); ++i) { // O(n)
        freq[i] = 0;
    }
    recursive_frequency_array(arr, small_array_size, freq); //O(n)
    int x = solve(freq, small_array_size, arr);
    free(freq);
    free(arr);
    return x;
}

