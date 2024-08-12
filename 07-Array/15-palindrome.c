/*
Homework : If an array arr contains n elements, then check if the given array is a palindrome or not.
*/

#include <stdio.h>
int main(){

    int arr[5] = {1,2,3,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len/2; i++)
    {
        if(arr[i] != arr[len-i-1]){
            printf("Not palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}