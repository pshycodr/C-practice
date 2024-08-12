#include <stdio.h>

void bubble_sort(int arr[], int len)
{
    for (int i = 0; i <= len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[10] = {3, 4, 5, 2, 6, 7, 8, 9, 3, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}