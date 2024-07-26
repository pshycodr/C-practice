#include <stdio.h>

int main(){
    int num, count;
    printf("Enter your number : ");
    scanf("%d", &num);
    count = 0;
    while(num!=0){
        num /= 10;
        count++;
    }
    printf("%d",count);

    return 0;
}