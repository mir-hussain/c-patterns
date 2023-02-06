#include <stdio.h>

main()
{

    //*  Using for loop

    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //* Using while loop

    // int i = 0, j = 0;

    // while (i <= 5)
    // {
    //     j = 0;
    //     while (j <= i)
    //     {
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");

    //     i++;
    // }

    //* Using do...while loop

    // int i = 0, j = 0;

    // do
    // {
    //     j = 0;
    //     while (j <= i)
    //     {
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");

    //     i++;
    // } while (i <= 5);
}
