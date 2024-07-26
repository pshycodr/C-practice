int amax(int num[], int a) {
    int i;
    for (i = 0; i < a - 1; i++) {
        if (num[i] < num[i + 1]) {
            continue;
        } else if (num[i] > num[i + 1]) {
            num[i + 1] = num[i];
        }
    }
    return num[i];
}

int amin(int num[], int a) {
    int i;
    for (i = 0; i < a - 1; i++) {
        if (num[i] > num[i + 1]) {
            continue;
        } else if (num[i] < num[i + 1]) {
            num[i + 1] = num[i];
        }
    }
    return num[i];
}

#include <stdio.h>
#include <conio.h>


int main() {
    int num[100], i, a;
    printf("Enter the number of inputs: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Max: %d\n", amax(num, a));
    printf("Min: %d\n", amin(num, a));
    getch();
    return 0;
}
