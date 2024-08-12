#include <stdio.h>
int main(){

    int arr[6] = {3,4,2,4,5,4};
    int length = (sizeof(arr)/sizeof(arr[0]));
    
    int temp;
    for (int i = 0; i < length/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1] = temp;
    }
    
    for (int i = 0; i < length; i++)
    {
        printf("%d", arr[i]);
    }
      
    return 0;
}