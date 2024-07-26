#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
    printf("Enter a number : ");
    // fflush(stdin);
    scanf("%d", &n);
    for(i=1; i<=(2*(n-1)); i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}
