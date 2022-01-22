#include <stdio.h>
void    f1_p4(int i, int j, char arr[][6], char nbr_rc)
{
    // printf("String, %c , i = %d, j = %d, nbr_rc = %c", arr[0][1], i , j , nbr_rc);
    // if (nbr_rc == '1')
    //     arr[i + 1][j] = '4';
    if (nbr_rc == '2')
        arr[i - 1][j] = '4';
    if (nbr_rc == '3')
        arr[i][j + 1] = '4';
    if (nbr_rc == '4')
        arr[i][j - 1] = '4';
}