void    insert_outer(char arr[][6], char argv[])
{
    int counter;
    int i;
    int j;

    counter = 0;
    i = 0; //row
    j = 0; //col
    // dia
    arr[0][0] = 'x';
    arr[0][5] = 'x';
    arr[5][0] = 'x';
    arr[5][5] = 'x';
    // insert_col_up
    while (j < 6)
    {
        if ((j > 0) && (j < 5))
        {
            arr[i][j] = argv[counter];
            counter++;
        }
        j++;
    }
    i = 5;
    counter = 4;
    j = 0;
    // insert_lower_row
    while (j < 6)
    {
        if ((j > 0) && (j < 5))
        {
            arr[i][j] = argv[counter];
            counter++;
        }
        j++;
    }
    i = 0;
    counter = 8;
    j = 0;
    // insert_right_col
    while (i < 6)
    {
        if ((i > 0) && (i < 5))
        {
            arr[i][j] = argv[counter];
            counter++;
        }
        i++;
    }  
    i = 0;
    counter = 12;
    j = 5;
    // insert_left_col
    while (i < 6)
    {
        if ((i > 0) && (i < 5))
        {
            arr[i][j] = argv[counter];
            counter++;
        }
        i++;
    }  

    i = 1;
    while (i < 5)
    {
        j = 1;
        while (j < 5)
        {
            arr[i][j] = 'x';
            j++;
        }
        i++;
    }  

}