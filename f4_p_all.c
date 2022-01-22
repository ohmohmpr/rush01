#include <stdio.h>
void    f4_p_all(int i, int j, char arr[][6], char nbr_rc)
{
    // printf("i = %d, j = %d\n", i, j);
    if (nbr_rc == '1')
    {
        arr[i + 1][j] = '1';
        arr[i + 2][j] = '2';
        arr[i + 3][j] = '3';
        arr[i + 4][j] = '4';
    }
    else if (nbr_rc == '2')
    {
        arr[i - 1][j] = '1';
        arr[i - 2][j] = '2';
        arr[i - 3][j] = '3';
        arr[i - 4][j] = '4';
    }
    else if (nbr_rc == '3')
    {
        arr[i][j + 1] = '1';
        arr[i][j + 2] = '2';
        arr[i][j + 3] = '3';
        arr[i][j + 4] = '4';
    }
    else if (nbr_rc == '4')
    {
        arr[i][j - 1] = '1';
        arr[i][j - 2] = '2';
        arr[i][j - 3] = '3';
        arr[i][j - 4] = '4';
    }
}