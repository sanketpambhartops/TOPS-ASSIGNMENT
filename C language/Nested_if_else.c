#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number=");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is grater",a);
        }
        else
        {
            printf("%d is grater",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is grater",b);
        }
        else
        {
            printf("%d is grater",c);
        }
    }
    return 0;
}