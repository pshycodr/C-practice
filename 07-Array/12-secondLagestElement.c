/*
Ques : Find the second largest element in the given Array.
*/

#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max1)
            max1 = arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
    }

    printf("%d", max2);
    return 0;
}