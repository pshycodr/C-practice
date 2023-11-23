#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    int vowels = 0, consonants = 0;

    // Input
    printf("Enter a word: ");
    scanf("%s", word);

    // Loop through each character in the word
    for (int i = 0; word[i] != '\0'; ++i) {
        // Convert the character to lowercase for case-insensitive comparison
        char ch = tolower(word[i]);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++vowels;
        } else if ((ch >= 'a' && ch <= 'z')) {
            // Check if the character is a consonant
            ++consonants;
        }
    }

    // Output
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
