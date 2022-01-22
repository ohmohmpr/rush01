#include <stdio.h>

void    f1_p4(int i, int j, char arr[][6], char nbr_rc);
void    f4_p_all(int i, int j, char arr[][6], char nbr_rc);

void    scan(char argv[], char arr[][6])
{
    int count;
    int i;
    int j;

    count = 0;
    while (argv[count] != '\0')
    { //4 3 2 1  1 2 2 2  4 3 2 1  1 2 2 2
      //0 1 2 3  4 5 6 7  8 91011 12131415
        // printf("j = %d\n", argv[count]);
        i = 0;
        j = 0;
        if (count / 4 == 0) // 0,4 - 5,1 - 4,0 - 1,5
        {
            i = 0; // 0,0 - 0,1 - 0,2 - 0,3 - 0,4 - 0,5
            j = count + 1;
            // printf("char = %c, ", argv[count]);
            // printf("i = %d, j = %d\n", i, j);
            if (argv[count] == '1')
                f1_p4(i, j, arr, '1');
            if (argv[count] == '4')
                f4_p_all(i, j, arr, '1');

        }
        else if (count / 4 == 1)
        {
            i = 5;
            j = count%4 + 1;
            // printf("char = %c, ", argv[count]);
            // printf("i = %d, j = %d\n", i, j);
            if (argv[count] == '1')
                f1_p4(i, j, arr, '2');
            if (argv[count] == '4')
                f4_p_all(i, j, arr, '2');
        }
        else if (count / 4 == 2)
        {
            i = count%4 + 1;
            j = 0;
            // printf("char = %c, ", argv[count]);
            // printf("i = %d, j = %d\n", i, j);
            if (argv[count] == '1')
                f1_p4(i, j, arr, '3');
            if (argv[count] == '4')
                f4_p_all(i, j, arr, '3');
        }
        else if (count / 4 == 3)
        {
            i = count%4 + 1;
            j = 5;
            // printf("char = %c, ", argv[count]);
            // printf("i = %d, j = %d\n", i, j);
            if (argv[count] == '1')
                f1_p4(i, j, arr, '4');
            if (argv[count] == '4')
                f4_p_all(i, j, arr, '4');
        }
        else
        {
            printf("end");
        }

        count++;
    }
}