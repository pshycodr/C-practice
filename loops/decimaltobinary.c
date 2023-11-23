#include <stdio.h>

int main() {
    int n, i, a[10], r, j;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    i = 0;
    while (n != 0) {
        r = n % 2;
        a[i] = r;
        i++;
        n = n / 2;
    }

    printf("Binary equivalent = ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", a[j]);
    }

    return 0;
}
