#include <stdio.h>
#include <stdlib.h>
int main(){

    int* ptr = (int*) malloc(10*4);
    
    printf("%d", ptr);

    return 0;
}