// // this is to calculate the area of a rectriangle

// #include <stdio.h>

// int main(){

//     int length , Breadth;
//     printf(" the length of the rectriangle is  \n");
//     scanf("%d", &length);
//     printf(" the Breadth of the rectriangle is \n");
//     scanf("%d", &Breadth);
//     printf("The area of the rectriangle is %d", length * Breadth);

//     return 0;

// #include <stdio.h>

// int main() {
//     float celsius, fahrenheit;

//     // Input temperature in Celsius
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

//     // Convert Celsius to Fahrenheit
//     fahrenheit = (celsius * 9 / 5) + 32;

//     // Display the converted temperature in Fahrenheit
//     printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

//     return 0;
// }

// #include <stdio.h>

// int main(){

//    int a , b;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);
//     printf("Enter the value of b \n");
//     scanf("%d", &b);
//     printf(" the answer is : %d \n", (a*a)+2*a*b+(b*b) );

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int a = 55;
//     int b = 65;
//     int ans = (a*a)+2*a*b+(b*b);
//     printf("the answer is %d", ans);

//         return 0;
// }

// #include <stdio.h>

// int main(){

//     float a, b;
//     printf("enter the value of a \n");
//     scanf("%f", &a);
//     printf("enter the value of b \n");
//     scanf("%f", &b);
//     printf("the addision of and b is %f", a * b);

//     return 0;
// }

// this is the program to calculate the total persentage of 4 subjects
// #include <stdio.h>

// int main(){

//     float math, physics, it_system, mechanics;

//     printf("enter the number you got in Math \n");
//     scanf("%f", &math);
//     printf("enter the number you got in physics \n");
//     scanf("%f", &physics);
//     printf("enter the number you got in it system \n");
//     scanf("%f", &it_system);
//     printf("enter the number you got in mechanics \n");
//     scanf("%f", &mechanics);
//     printf("the persentage is : %f \n", (math + physics + it_system + mechanics)/4);
//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int a, b;

//     scanf("%d %d", &a,&b);
//     int r = a%b;
// printf(" the remainder of %d and %d is : %d",a,b,r);
//     return 0;
// }

// to print only the fractional part of any number

// #include <stdio.h>

// int main()
// {
//     float a;
//     printf("Enter a number : ");
//     scanf("%f", &a);
//     int b = a;
//    float c = a - b;
//     printf("the fractional part of the number is : %f", c);

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int i=2, j=3, k,l;
//     float a,b;
//     k = i/j*j;
//     l = j/i*i;
//     a = i/j*j;
//     b = j/i*i;
// printf("%d    %d   %f   %f", k,l,a,b);
//     return 0;
// }

// #include <stdio.h>

// int main(){

//     float a;
//     printf ("enter any number : ");
//     scanf("%f", &a);
//     int b = a;
//     float c = a-b;
//     printf(" the  fractional part of the number is : %f", c);

// return 0;
// }

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    int opt;
    printf("1. Multiplication Table\n ");
    printf("Enter your choice: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:                          // Change to case 1
        for (int i = 1; i <= 1; i++) // Print the multiplication table 10 times
        {
            for (int j = 1; j <= 100; j++)
            {
                printf("%d * %d = %d\t", num, j, num * j);
                printf("\n");
            }
        }
        break;

    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
