#include <stdio.h>

void BinSearch(int arr[], int key, int l, int h)
{
    int mid = (l + h) / 2;
    if (l <= h)
    {
        if (arr[mid] == key)
        {
            printf("Element found at index: %d", mid);
        }
        else if (arr[mid] < key)
        {
            BinSearch(arr, key, (mid + 1), h);
        }
        else
        {
            BinSearch(arr, key, l, (mid - 1));
        }
    }
    else
    {
        printf("Key not found");
    }
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 8,
        l = 0,
        h = 9;
        
    BinSearch(arr, key, l, h);

    return 0;
}