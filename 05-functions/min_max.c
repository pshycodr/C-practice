#include <stdio.h>

int amax(int arr[], int size)
{

    if (size == 1)
        return arr[0];

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int amin(int arr[], int size)
{

    if (size == 1)
        return arr[0];

    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int i, a;
    printf("Enter the number of inputs: ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("No values to process");
        return 0;
    }

    int num[a];

    for (i = 0; i < a; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Max: %d\n", amax(num, a));
    printf("Min: %d\n", amin(num, a));

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}