#include <stdio.h>
int main(){

    long n, ans;
    printf("Enter a num: ");
    scanf("%d", &n);

    ans = (n*(n+1))/2;

    printf("%d", ans);

    return 0;
}