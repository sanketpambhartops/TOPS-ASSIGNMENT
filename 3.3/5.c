#include <stdio.h>
int main()
{

    int n1, i, j, temp = 0, ch;

    printf("Enter value of n for array 1: ");
    scanf("%d", &n1);

    int a1[n1];

    for (i = 0; i < n1; i++)
    {
        printf("Enter value for array 1: ");
        scanf("%d", &a1[i]);
    }
    printf("Original array : ");
    for (i = 0; i < n1; i++)
    {

        printf("%d ", a1[i]);
    }
    printf("\n1. Acsending order\n2, Descending order\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        for (i = 0; i < n1; i++)
        {
            for (j = i + 1; j < n1; j++)
            {
                if (a1[i] > a1[j])
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
        }
        printf("\nascending array : ");
        for (i = 0; i < n1; i++)
        {

            printf("%d ", a1[i]);
        }
        break;
    case 2:
        for (i = 0; i < n1; i++)
        {
            for (j = i + 1; j < n1; j++)
            {
                if (a1[i] < a1[j])
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
        }
        printf("\ndesscending array : ");
        for (i = 0; i < n1; i++)
        {

            printf("%d ", a1[i]);
        }
    }
    return 0;
}