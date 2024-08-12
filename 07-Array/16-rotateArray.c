/*
Ques : Rotate the given array 'a' by k steps, where k is non-negative.
Note : k can be greater than n as well where n is the size of array 'a'.
*/

#include <stdio.h>

void printArr(int arr[], int len) {
    if (len <= 0) {
        printf("Array is empty or invalid length.\n");
        return;
    }

    for (int i = 0; i < len; i++) {
        if (i < len - 1) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}

void reverse(int arr[], int s, int e)
{
    for (int i = s, j = e; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr) / sizeof(arr[0]);

    int k;
    printf("Enter the number of rotations: ");
    scanf("%d", &k);

    if(k>len) k = k%len;

    printArr(arr, len);

    reverse(arr, 0,len-1);
    reverse(arr, 0,k-1);
    reverse(arr, k,len-1);
    printArr(arr, len);

    return 0;
}