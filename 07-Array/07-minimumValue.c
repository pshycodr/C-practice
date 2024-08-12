/*
Homework : Find the minimum value out of all the in the array
*/


#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int min = arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    
    printf("%d", min);

    return 0;
}