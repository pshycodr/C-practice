/*
Ques : Given an array containing elements from 1 to 100 except one element in this range is missing. Find the missing element.
*/

#include <stdio.h>
int main(){

    int arr[10] ={1,2,3,4,5,6,7,9,10,11} ;
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if(i+1 != arr[i]) {
            printf("Missing element is: %d", i+1);
            break;
        }
    }
    

    return 0;
}