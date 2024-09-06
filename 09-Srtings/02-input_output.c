#include <stdio.h>
#include <string.h>
int main(){

    // INPUT
    char str1[40];
    char str2[40];

    scanf("%s", str2); // only the first word can be input
    scanf("%[^\n]s", str2); //now the entire sentence can be input
    gets(str1); //entire sentence can be input

    // OUTPUT
    printf("%s\n", str1);
    puts(str1);

    return 0;
}