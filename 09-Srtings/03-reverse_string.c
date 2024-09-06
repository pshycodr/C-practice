#include <stdio.h>
#include <string.h>

int sizeCh(char str[]){
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    return size;
}

int main(){

    char str[40];

    printf("Enter your string: ");
    scanf("%[^\n]s", str);
    int size = sizeCh(str);
    
    for(int i=0, j=(size-1); i<=j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts(str);

    return 0;
}