#include <stdio.h>
void    split_row_col(char argv[])
{
    char arr[4][4];
    int i;
    int j;
    int k ;

    i = 0;
    while (argv[i] != '\0')
    {
        if (i / 4 == 0)
        {
            arr[0][i%4] = argv[i];
            // printf("i / 4 == 0 = %d\n", i%4);
            // printf("argv[i] = %d\n", argv[i] - 48);
        }
        else if (i / 4 == 1)
        {
            arr[1][i%4] = argv[i];
        }
        else if (i / 4 == 2)
        {
            arr[2][i%4] = argv[i];
        }
        else if (i / 4 == 3)
        {
            arr[3][i%4] = argv[i];
        }
        else
            printf("end");
        i++;
    }

    
    k = 0;

    while (k < 4)
    {
        j = 0;
        while (j < 4)
        {
            printf("%c:", arr[k][j]);
            j++;
        }
        k++;
    }
    return arr[k][j];
}