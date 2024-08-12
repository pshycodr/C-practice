#include <stdio.h>
int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int len = sizeof(arr) / sizeof(arr[0]);

    // Transpose
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Reverse
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][len - j - 1];
            arr[i][len - j - 1] = temp;
        }
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%d, ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}