class InputError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

def text_to_binary(text):
    binary_values = ' '.join(format(ord(char), '08b') for char in text)
    return binary_values

def binary_to_text(binary_str):
    try:
        text = ''.join(chr(int(binary, 2)) for binary in binary_str.split())
        return text
    except ValueError as e:
        raise InputError(f"Error converting binary: {e}")

def main():
    try:
        while True:
            print("\n1. Convert text to binary\n2. Convert binary to text\n3. Quit")
            choice = input("Enter your choice (1, 2, or 3): ")

            if choice == "1":
                input_text = input("Enter the text you want to convert to binary: ")
                binary_result = text_to_binary(input_text)
                print(f"Binary representation: {binary_result}")

            elif choice == "2":
                input_binary = input("Enter the binary code you want to convert to text: ")
                text_result = binary_to_text(input_binary)
                print(f"Text representation: {text_result}")

            elif choice == "3":
                print("Exiting the program. Goodbye!")
                break

            else:
                raise InputError("Invalid choice. Please enter 1, 2, or 3.")

    except InputError as e:
        print(f"Error: {e}")
        main()  # Restart the program in case of an error

if __name__ == "__main__":
    main()



'''
**Documentation for the Binary Converter Program:**

### Purpose:
The program allows users to convert text to binary and binary to text. It includes user input, error handling, and a custom error class (`InputError`). The user is presented with a menu to choose the desired conversion or to exit the program.

### Classes:

#### 1. `InputError(Exception)`
   - **Purpose:** Custom exception class to handle input-related errors.
   - **Attributes:**
     - `message`: A string containing the error message.
   - **Methods:**
     - `__init__(self, message)`: Initializes the exception with the provided error message.

### Functions:

#### 2. `text_to_binary(text)`
   - **Purpose:** Converts text to its binary representation.
   - **Input:**
     - `text`: The input text to be converted.
   - **Output:**
     - A string representing the binary values of each character in the input text.

#### 3. `binary_to_text(binary_str)`
   - **Purpose:** Converts binary values to their corresponding text representation.
   - **Input:**
     - `binary_str`: A string containing binary values separated by spaces.
   - **Output:**
     - The converted text.

#### 4. `main()`
   - **Purpose:** The main function is the entry point for the program. It provides a menu for the user to choose between text to binary, binary to text, or quitting the program. It handles user input and exceptions using a loop.
   - **Input:**
     - User inputs a choice (1, 2, or 3) from the menu.
     - If the choice is 1, the user inputs text for conversion to binary.
     - If the choice is 2, the user inputs binary for conversion to text.
   - **Output:**
     - Displays the converted result or an error message.

### Execution Flow:

1. **User Input:**
   - The user is presented with a menu to choose between text to binary, binary to text, or quitting the program.

2. **Option 1: Text to Binary:**
   - If the user chooses option 1, they are prompted to enter the text they want to convert to binary.
   - The `text_to_binary` function is called to perform the conversion.
   - The binary representation is displayed.

3. **Option 2: Binary to Text:**
   - If the user chooses option 2, they are prompted to enter the binary code they want to convert to text.
   - The `binary_to_text` function is called to perform the conversion.
   - The text representation is displayed.

4. **Option 3: Quit:**
   - If the user chooses option 3, the program exits.

5. **Error Handling:**
   - The program handles errors using a `try-except` block.
   - An `InputError` is raised for invalid menu choices or binary conversion errors.
   - Error messages are displayed, and the program allows the user to continue.

### Note:
- The program continues to run until the user chooses to exit (option 3).
- The custom `InputError` class is utilized for more specific error handling.
- The `__name__ == "__main__":` block ensures that the `main()` function is executed only if the script is run as the main program, not if it is imported as a module.

'''