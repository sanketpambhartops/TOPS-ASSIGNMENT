#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row and Column: ");
    scanf("%d %d", &row, &column);
    int array1[row][column], array2[row][column], add[row][column], subt[row][column];
    printf("Enter array1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Number: ");
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter array2\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Number: ");
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            add[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            subt[i][j] = array1[i][j] - array2[i][j];
        }
    }
    printf("array1\n");

    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("array2\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    printf("add\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    printf("subtract\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", subt[i][j]);
        }
        printf("\n");
    }
    return 0;
}