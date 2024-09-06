#include <stdio.h>
#include <string.h>

#define line printf("\n")

void test1()
{
    char str[] = "hello";
    char *ptr = &str[0];

    printf("%p", ptr);
    line;
    printf("%c", *ptr);
    line;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
}

void test2(){
    // char* ptr = "Hello world"; //Note: Such direct initialisation using pointers results in a read-only memory allocation of character arrays and hence, causes undefined behaviour when we try to change the individual characters.  

    
}

int main()
{
    // test1();
    return 0;
}