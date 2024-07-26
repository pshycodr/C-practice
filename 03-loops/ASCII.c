#include <stdio.h>
#include <conio.h>

int main(){

    int x;
    char ch;
    for(int i=0; i<=126; i++){
        x=i;
        ch=(char)x;
        printf("ASCII value of  %c  is : %d\n", ch, x);
    }

    getch();
    return 0;
}