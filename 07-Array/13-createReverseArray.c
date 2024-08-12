/*
Ques : Write a program to copy the contents of one array into another in the reverse order.
*/

#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int revArr[10];
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        revArr[i] = arr[len-i-1];
    }
    for (int i = 0; i < len; i++)
    {
       printf("%d, ", revArr[i]);
    }
    

    return 0;
}