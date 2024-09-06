#include <stdio.h>

void BinSearch(int arr[], int n, int key)
{
    int l = 0;
    int h = n;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at index: %d", mid);
            break;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    printf("key not found");
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 9, key = 80;
    BinSearch(arr, n, key);
    return 0;
}