//Que:- check the string is a palindrom or not.


#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], i, j = 0;

    printf("Enter your word: ");
    scanf("%s", str1);
    int length = strlen(str1);
     for (i = length - 1; i >= 0; i--) {
        str2[j] = str1[i];
        j++;
    }
    str2[j]='\0';

    int compare = strcmp(str1,str2);
    if(compare == 0){
        printf("this is a palindrom");
    }else{
        printf("this is not a palindrom");
    }

    return 0;
}
