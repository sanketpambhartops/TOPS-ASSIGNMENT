//simple calculator(addition,subtraction,multiplication,division,modulo)//

#include<stdio.h>
int main()
{
    char num;
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter operator=");
    scanf(" ");
    scanf("%c",&num);
    switch(num)
    {
        case '+':
        {
            printf("ans=%d",a+b);
            break;
        }
        case '-':
        {
            printf("ans=%d",a-b);
            break;
        }
        case '*':
        {
            printf("ans=%d",a*b);
            break;
        }
        case '/':
        {
            printf("ans=%d",a/b);
            break;
        }
        case '%':
        {
            printf("ans=%d",a%b);
            break;
        }
        default:
        {
            printf("Enter valid operator");
        }

    }
    return 0;
}