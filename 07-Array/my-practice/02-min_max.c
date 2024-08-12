#include <stdio.h>

int arr_min(int arr[], int len) {
    int min = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int arr_max(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[6] = {3, 4, 2, 4, 5, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    int min = arr_min(arr, len);
    int max = arr_max(arr, len);

    printf("min element: %d\n", min);
    printf("max element: %d\n", max);

    return 0;
}
