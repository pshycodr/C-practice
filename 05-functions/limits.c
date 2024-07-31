#include <stdio.h>
#include <limits.h>

int main() {
    printf("Bits in a char: %d\n", CHAR_BIT);
    printf("Minimum char value: %d\n", CHAR_MIN);
    printf("Maximum char value: %d\n", CHAR_MAX);

    printf("Minimum short value: %d\n", SHRT_MIN);
    printf("Maximum short value: %d\n", SHRT_MAX);

    printf("Minimum int value: %d\n", INT_MIN);
    printf("Maximum int value: %d\n", INT_MAX);

    printf("Minimum long value: %ld\n", LONG_MIN);
    printf("Maximum long value: %ld\n", LONG_MAX);

    printf("Minimum long long value: %lld\n", LLONG_MIN);
    printf("Maximum long long value: %lld\n", LLONG_MAX);

    return 0;
}


