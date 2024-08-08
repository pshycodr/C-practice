#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverse_str(char* str, int start, int end){
    if (start >= end){
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse_str(str, start+1, end-1);

}

int main(){

    char str[] = "Anish";
    reverse_str(str, 0, strlen(str)-1);
    printf("%s", str);

    getch();
    return 0;
}