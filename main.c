#include <stdio.h>
#include <math.h>
#include <limits.h>
int main() {
    int a[(int)(5 * pow(10, 4))];
    int size = (int)(5 * pow(10, 4));

    for (int i = 0; i < size; ++i) {
        a[i] = 0;
    }
    int n,x;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        a[x]++;
    }
    int mx = INT_MIN;
    int num = INT_MIN;
    for (int i = 0; i < size - 1; ++i) {
        if (mx < a[i] ){
            mx = a[i];
            num = i;
        }
    }
    if (mx > n/2)
    {
        printf("%d", num);
    }
    else
    {
        printf("%d", -1);
    }
    return 0;
}
