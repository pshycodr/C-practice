/*
Ques : Calculate the sum of all the elements in the given array.
*/


#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int sum = 0;
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);
    

    return 0;
}