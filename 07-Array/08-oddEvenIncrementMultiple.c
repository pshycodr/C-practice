/*
Ques : Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
*/

#include <stdio.h>
int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if(i%2==0) arr[i] += 10;
        else arr[i] *= 2;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
    

    return 0;
}