/* *Ques : Print the given pattern
1
0 1
1 0 1
0 1 0 1
*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int rows, a = 1, b = 0, c;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        c = i;
        for (int j = 1; j <= i; j++)
        {
            if (c % 2 == 0)
            {
                printf("%d ", b);
            }
            else
            {
                printf("%d ", a);
            }
            c++;
        }
        printf("\n");
    }

    getch();
    return 0;
}

// OR:-
// 
// 
// #include <stdio.h>
// #include <conio.h>

//     int main()
// {

//     int rows, a;
//     printf("Enter the number of rows : ");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         if (i % 2 != 0)
//             a = 1;
//         else
//             a = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", a);
//             if (a == 0)
//                 a = 1;
//             else
//                 a = 0;
//         }
//         printf("\n");
//     }

//     getch();
//     return 0;
// }