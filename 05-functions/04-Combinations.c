#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int combination(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int permutation(int n, int r){
    return  factorial(n) / factorial(n - r);
}

int main() {
    int n, r;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("n should be greater than or equal to r.\n");
        return 1;
    }

    
    

    printf("Combination (C(%d, %d)) = %d\n", n, r, combination(n,r));
    printf("Permutation (P(%d, %d)) = %d\n", n, r, permutation(n,r));

    return 0;
}
