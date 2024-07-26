// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// int main() {
//     char name[50]; // Specify a size for the array
//     int x;
//     printf("Enter a word: ");
//     scanf("%s", name); // Use %s to read a string

//     for (int i = 0; i < sizeof(name); i++) {
//         x = (int)name[i];
//         char binary_string[9]; // Assuming 8-bit character plus null terminator
//         itoa(x, binary_string, 2);
//         printf("%s ", binary_string);
//     }

//     getch();
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define custom exception for input errors
struct InputError {
    const char* message;
};

// Function to convert text to binary
char* text_to_binary(const char* text) {
    int text_length = strlen(text);
    char* binary_values = (char*)malloc((text_length * 8) + 1);

    int index = 0;
    for (int i = 0; i < text_length; i++) {
        for (int j = 7; j >= 0; j--) {
            binary_values[index++] = ((text[i] >> j) & 1) + '0';
        }
        binary_values[index++] = ' ';
    }

    binary_values[index - 1] = '\0';  // Null-terminate the string
    return binary_values;
}

// Function to convert binary to text
char* binary_to_text(const char* binary_str) {
    char* text = (char*)malloc(strlen(binary_str) / 8 + 1);
    char* binary_copy = strdup(binary_str);

    char* token = strtok(binary_copy, " ");
    int index = 0;

    while (token != NULL) {
        text[index++] = strtol(token, NULL, 2);
        token = strtok(NULL, " ");
    }

    text[index] = '\0';  // Null-terminate the string
    free(binary_copy);
    return text;
}

// Function to handle input errors
void handle_input_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(EXIT_FAILURE);
}

int main() {
    char choice[2];

    while (1) {
        printf("\n1. Convert text to binary\n2. Convert binary to text\n3. Quit\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%1s", choice);

        if (choice[0] == '1') {
            char input_text[256];
            printf("Enter the text you want to convert to binary: ");
            scanf(" %[^\n]", input_text);

            char* binary_result = text_to_binary(input_text);
            printf("Binary representation: %s\n", binary_result);
            free(binary_result);
        } else if (choice[0] == '2') {
            char input_binary[1024];
            printf("Enter the binary code 2you want to convert to text: ");
            scanf(" %[^\n]", input_binary);

            char* text_result = binary_to_text(input_binary);
            printf("Text representation: %s\n", text_result);
            free(text_result);
        } else if (choice[0] == '3') {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else {
            handle_input_error("Invalid choice. Please enter 1, 2, or 3.");
        }
    }

    return 0;
}
