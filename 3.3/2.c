#include <stdio.h>
int main()
{
    // simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)

    int a, b, ch, res;

    do
    {
        printf("\n");
        printf("1=addtion\n");
        printf("2=substrantion\n");
        printf("3=division\n");
        printf("4=multiplication\n");
        printf("5=exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        printf("Enter two values: ");
        scanf("%d %d", &a, &b);
        switch (ch)
        {
        case 1:
            printf("sum of %d and %d is %d", a, b, a + b);
            break;

        case 2:
            printf("sum of %d and %d is %d", a, b, a - b);
            break;
        case 3:
            printf("sum of %d and %d is %d",a, b, a / b);
            break;
        case 4:
            printf("sum of %d and %d is %d", a, b, a * b);
            break;
        case 5:
            break;
        }
    } while (ch != 5);
    return 0;
}