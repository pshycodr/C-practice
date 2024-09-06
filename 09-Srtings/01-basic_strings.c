#include <stdio.h>
int main(){

    char str[] = {'h', 'e', 'l', 'l', 'o'}; // one way of declearing a string
    // printf("%c", str[1]);

    char str2[] = "hello\0"; // \0 is a null charecter
    printf("%c", str2[0]);

    return 0;
}