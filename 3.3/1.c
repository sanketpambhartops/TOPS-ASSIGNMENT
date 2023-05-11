#include <stdio.h>
int main()
{
// find out the max number from given array using function
    int max, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n], i;

    for (i = 0; i < n; i++)
    {
        printf("Enter value in array: ");
        scanf("%d", &array[i]);
    }
    max = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    printf("%d", max);

    return 0;
}