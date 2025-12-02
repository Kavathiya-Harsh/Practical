#include <stdio.h>

int main() {
    int arr[7] = {20, 32, 6, 7, 22, 47, 21};
    int n = 7;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < min)
         min = arr[i];
        if (arr[i] > max)
         max = arr[i];
    }

    printf("\nSmallest element = %d\nLargest element = %d\n", min, max);

    return 0;
}