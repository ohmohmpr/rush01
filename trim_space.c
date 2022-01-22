#include<stdio.h>
char    trim_space(char argv[])
{
    int i;
    int len;
    char a[16];

    // printf("%p", argv);
    i = 0;
    len = 0;
    while (argv[i] != '\0')
    {
        if (argv[i] != ' ')
        {
            argv[len] = argv[i];
            // printf("%c", argv[len]);
            // printf("%d, ", len);
            len++;
        }
        i++;
    }
    argv[len] = '\0';
    return (argv[len]);
    // printf("%s", a);
}