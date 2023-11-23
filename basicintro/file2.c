// // // #include <stdio.h>

// // // int main()
// // // {
// // //     // this is a program of sum of two integers
// // //     int inta = 5;
// // //     int intb = 6;
// // //     int intc = 19;
// // //     int intd = 18376;
// // //     // this is the example of how to write real constants
// // //     float floata = 9.8;
// // //     float floatb = 7.9;
// // //     printf("the sum of a and b is %d \n", inta + intb + intc + intd);
// // //     printf("the sum of a and b is %f \n", floata + floatb);
// // //     printf("the sum of inta and floata is %d %f", inta + (int)floata, floata);
// // //     return 0;
// // // }

// // // #include <stdio.h>

// // // int main(){

// //     char n='anish', x;
// //     x=n;
// //     printf(" enter your name :  ");
// //     scanf("%c", &x);
// //     if(n==x){
// //         printf(" a true genius");
// //     }
// //     else{
// //         printf("chudir vai");
// //     }

// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main(){

// //     // int a=5;
// //     if(5){
// //         printf(" hello world");
// //     }

// //     return 0;
// // }

// #include <stdio.h>

// int main(){

//     int  a,b,c,d,e,f,i;

//     return 0;
// }

/*C Program to find LCM of two numbers*/
// #include <stdio.h>
// int main()
// {
//     int n1, n2, max;
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &n1, &n2);

//     // maximum number
//     max = (n1>n2) ? n1 : n2;

//     // Always true
//     while(1)
//     {
//         if( max%n1==0 && max%n2==0 )          //check for max will be perfectly divisible or not
//         {
//             printf("The LCM of two numbers is: %d",max);
//             break;
//         }
//         ++max;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int a = 0;
//     for (int i = 2; i <= 55; i++)
//     {
//         int b = 1;
//         if (i % b == 0)
//         {
//             a = 1;
//         }
//         b++;
//         if (a == 0)
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }#include <stdio.h>



#include <stdio.h>

int main(){

   char a='A';
    printf("%s", a);


    return 0;
}