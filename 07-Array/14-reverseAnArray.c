/*
Ques : Write a program to reverse the array without using any extra array.
*/

#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }

    for (int i = 0; i < len; i++)
    {
       printf("%d, ", arr[i]);
    }
    
    

    return 0;
}