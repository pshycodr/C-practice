#include <stdio.h>
int main(){

    FILE *file = fopen("a.txt", "w");

    fprintf(file, "hello world\n");

    fclose(file);


    file = fopen("a.txt", "r");
    char ch;
    while((ch = fgetc(file) )!= EOF){
        putchar(ch);
    }
    
    fclose(file);
    return 0;
}