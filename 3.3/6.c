#include <stdio.h>
int main()
{
    int i, j, ch, r1, c1, r2, c2, k, sum;

    printf("Enter values for 1st matrix\n");
    printf("Enter value of row: ");
    scanf("%d", &r1);
    printf("Enter value of columns: ");
    scanf("%d", &c1);
    int array1[r1][c1];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter value of array1 %d %d: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter value for 2nd matrix\n");
    printf("Enter value of row: ");
    scanf("%d", &r2);
    printf("Enter value of columns: ");
    scanf("%d", &c2);

    int array2[r2][c2];
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter value of array2 %d %d: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    printf("Orignal Value: \n");
    printf("1st matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    do
    {
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("0. For exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (r1 = r2 = c1 = c2)
            {
                printf("Addition Matrix\n");
                for (i = 0, i = 0; i < r1, i < r2; i++, i++)
                {
                    for (j = 0, j = 0; j < c1, j < c2; j++, j++)
                    {
                        printf("%d+%d=%d ", i, j, array1[i][j] + array2[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 2:
            if (r1 = r2 = c1 = c2)
            {
                printf("Substraction Matrix\n");
                for (i = 0; i < r1, i < r2; i++)
                {
                    for (j = 0; j < c1, j < c2; j++)
                    {
                        printf("%d ", array1[i][j] - array2[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 3:

            if (c1 == r2)
            {
                int array3[i][j];
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        sum = 0;
                        for (k = 0; k < c1; k++)
                        {
                            sum = sum + (array1[i][k] * array2[k][j]);
                            array3[i][j] = sum;
                        }
                    }
                    printf("\n");
                }
                printf("Multipied Matrix\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        printf("%d ", array3[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Matrix 1 can not be multipied by matrix 2\n enter valid matrix details");
            }
            break;
        }

    } while (ch != 0);
    return 0;
}