#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char name[50]; // Specify a size for the array
    int x;
    printf("Enter a word: ");
    scanf("%s", name); // Use %s to read a string

    for (int i = 0; i < sizeof(name); i++) {
        x = (int)name[i];
        char binary_string[9]; // Assuming 8-bit character plus null terminator
        itoa(x, binary_string, 2);
        printf("%s ", binary_string);
    }

    getch();
    return 0;
}
