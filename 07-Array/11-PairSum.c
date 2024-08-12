/*
Ques : Find the total number of pairs in the Array whose sum is equal to the given value x.
*/

#include <stdio.h>
int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int n = 12;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == n && arr[i] != arr[j])
                printf("%d + %d = %d \n", arr[i], arr[j], n);
        }
    }

    return 0;
}