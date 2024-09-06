#include <stdio.h>

typedef int* intPtr;

int main(){

    int a = 2, b=4;

    // int* x = &a, y = &b; // This is wrong won't work
    
    intPtr x = &a, y = &b;

    printf("%p\n", x);
    printf("%p", y);

    return 0;
}