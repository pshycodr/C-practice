#include <stdio.h>
#include<conio.h>

int main(void)
{
    char word[100];
    int vowels = 0, consonants = 0;

    // user input
    printf("Enter a word: ");
    scanf("%s", &word);

    // Loop through each character in the word
    for (int i = 0; word[i] != '\0'; i++)
    {
        // check if the character is vowel
        switch (word[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

            //counting vowels(if any)
            ++vowels;
            break;
        // counting consonants(if any)
        default:
            ++consonants;
            break;
        }
    }

    // output
    if (vowels == 0)
    {
        printf("No vowels in the word.\n");
    }
    else
    {
        printf("Vowels: %d\n", vowels);
    }

    if (consonants == 0)
    {
        printf("No consonants in the word.\n");
    }
    else
    {
        printf("Consonants: %d\n", consonants);
    }

    return 0;
}