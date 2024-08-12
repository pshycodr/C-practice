/*
Ques : Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
*/

#include <stdio.h>
int main(){

    int arr[10] = {34, 56, 32, 23, 52, 79, 98, 54, 26, 78};
    int od = 0, ev = 0;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if(i%2 == 0) ev += arr[i];
        else od += arr[i];
    }
    
    printf("%d",ev-od);
    return 0;
}