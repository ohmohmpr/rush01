#include<stdio.h>
void    display(char arr[][6])
{
    int i;
    int j;

    i = 0;
    while (i < 6)
    {
        j = 0;
        while (j < 6)
        {
            printf("%c ", arr[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
}