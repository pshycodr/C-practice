/*
Homework : Calculate the product of all the elements in the given array.
*/


#include <stdio.h>
int main(){

    int arr[3] = {1,2,3};
    int sum = 1;
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        sum = sum * arr[i];
    }

    printf("%d", sum);
    

    return 0;
}