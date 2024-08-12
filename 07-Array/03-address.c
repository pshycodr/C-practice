#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};

    for (int i = 0; i < 10; i++)
    {
        printf("%p\n", &arr[i]);
    }
    

    return 0;
}