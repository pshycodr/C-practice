#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    
    printf("Enter the 2nd number : ");
    scanf("%d", &b);
    
    printf("Enter the 3rd number : ");
    scanf("%d", &c);
    
    printf("Enter the 4th number : ");
    scanf("%d", &d);
    
    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("%d is the greatest", a);
            } else {
                printf("%d is the greatest", d);
            }
        } else {
            if (c > d) {
                printf("%d is the greatest", c);
            } else {
                printf("%d is the greatest", d);
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                printf("%d is the greatest", b);
            } else {
                printf("%d is the greatest", d);
            }
        } else {
            if (c > d) {
                printf("%d is the greatest", c);
            } else {
                printf("%d is the greatest", d);
            }
        }
    }

    return 0;
}