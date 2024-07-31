#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

/* 
Important Notes About Pointers in C:

1. **Definition**:
   - A pointer is a variable that stores the memory address of another variable.

2. **Declaration**:
   - Declare a pointer by specifying the type of data it points to, followed by an asterisk (*). For example, `int *p;` declares a pointer to an integer.

3. **Dereferencing**:
   - Dereferencing a pointer means accessing the value stored at the memory address the pointer is pointing to. This is done using the asterisk (*) operator. For example, `*p` gives the value at the address stored in `p`.

4. **Address-of Operator**:
   - The address-of operator (&) is used to obtain the memory address of a variable. For example, `&a` gives the address of variable `a`.

5. **Pointer Arithmetic**:
   - Pointers can be incremented or decremented. For example, `p++` moves the pointer to the next memory location of its type (e.g., for an `int` pointer, it moves by 4 bytes on a 32-bit system).

6. **Null Pointer**:
   - A null pointer is a pointer that does not point to any valid memory location. It is often used to indicate that the pointer is not initialized. For example, `int *p = NULL;`.

7. **Pointer to Pointer**:
   - You can have pointers to pointers. For example, `int **pp` is a pointer to a pointer to an integer.

8. **Function Pointers**:
   - Pointers can also point to functions, allowing dynamic function calls. For example, `void (*fptr)(int, int)` declares a pointer to a function taking two `int` parameters and returning `void`.

9. **Common Pitfalls**:
   - **Dangling Pointers**: Pointers that refer to memory that has been freed.
   - **Memory Leaks**: Not freeing memory allocated on the heap can lead to memory leaks.
   - **Pointer Arithmetic Errors**: Incorrect pointer arithmetic can lead to accessing invalid memory locations.

10. **Use Cases**:
    - Pointers are used for dynamic memory allocation, arrays, structures, and functions. They provide powerful capabilities but must be used with care to avoid bugs and memory issues.
*/
