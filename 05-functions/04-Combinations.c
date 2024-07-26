#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, r, combination, permutation;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("n should be greater than or equal to r.\n");
        return 1;
    }

    combination = factorial(n) / (factorial(r) * factorial(n - r));
    permutation = factorial(n) / factorial(n - r);

    printf("Combination (C(%d, %d)) = %d\n", n, r, combination);
    printf("Permutation (P(%d, %d)) = %d\n", n, r, permutation);

    return 0;
}
