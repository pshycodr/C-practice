/*
Ques : Count the number of elements in given array greater than a given number x.
*/

#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};
    int n = 50, max = 0;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if(arr[i] > n) {
            max++;
        }
    }

    printf("%d", max);
    

    return 0;
}