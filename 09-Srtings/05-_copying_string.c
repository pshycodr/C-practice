#include <stdio.h>
int main(){

// SHALLOW COPY
    // char s1[] = "Hello";
    // char* s2 = s1;
    // s1[0] = 'A';
    // printf("%s", s2);

// DEEP COPY
    char s1[] = "Hello";
    char s2[] = "Hello";
    printf("%p\n", &s1);
    printf("%p", &s2);

    return 0;
}