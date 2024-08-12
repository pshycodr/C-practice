#include <stdio.h>
int main(){

    FILE *file = fopen("a.txt", "r");

        if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    // Read the file one character at a time and print it
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}