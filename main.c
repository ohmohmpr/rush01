#include <stdio.h>

int find_dim(char argv[]);
void    insert_outer(char arr[][6], char argv[]);
void    display(char arr[][6]);
void    trim_space(char argv[]);
void    scan(char argv[], char arr[][6]);
// void    split_row_col(char argv[]);

int main(int argc,char* argv[])
{
    int counter;
    char arr[6][6];

    // counter = find_dim(argv[1]);
    // printf("dim = %d", counter);
    trim_space(argv[1]);
    insert_outer(arr, argv[1]);
    scan(argv[1], arr);
    // split_row_col(argv[1]);
    display(arr);


    printf("++++++++++++++++++++++\n");
    return 0;
}

int find_dim(char argv[])
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (argv[i] != '\0')
    {
        printf("%c", argv[i]);
        if (argv[i] != ' ')
            len++;
        i++;
    }
    printf("\nlen = %d", len);
        
    return (len / 4);
}

