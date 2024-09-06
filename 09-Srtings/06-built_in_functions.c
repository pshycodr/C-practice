#include <stdio.h>
#include <string.h>

#define line printf("\n")

int main(){

    char str[] = "Hello";

// strlen(char *str)
    int n = strlen( str);
    printf("%d", n);

    line;

// strcpy(char* str1, char* str2)
    char s1[5];
    strcpy(s1, str);
    printf("%s", s1);

    line;

// strcat(dest, src)
    char s2[] = "world";
    strcat(s1, s2);
    printf("%s", s1);
    
    line;

// strcmp()
    char s3[] = "hii";
    

    return 0;
}