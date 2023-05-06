//print number is odd or even using ternary operator//

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    (num/2) ? printf("number is even"):printf("number is odd"); //ternary operator//
    return 0;
}