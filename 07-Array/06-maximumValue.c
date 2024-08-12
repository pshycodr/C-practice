/*
Ques : Find the maximum value out of all the elements in the array.
*/

#include <stdio.h>
int main()
{

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int max = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d", max);

    return 0;
}