#include <stdio.h>
int main(){

    FILE *filePtr = fopen("test.txt", "w");
    char str[] = "Hello world!!\nThis is from me\nthis is file handeling";
    fputs(str, filePtr);
    fclose(filePtr);

    filePtr = fopen("test.txt", "r");
    char fileStr[100];
   while (fgets(fileStr, 100, filePtr) != NULL)
   {
    printf("%s", fileStr);
   }
   
    fclose(filePtr);
    

    return 0;
}