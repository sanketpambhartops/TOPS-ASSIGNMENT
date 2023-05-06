//summation of given number//

#include<stdio.h>
int main()
{
    int num,rem=0,large=0,total=0;
    printf("Enter value=");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(rem>large || rem<large)
        {
            large=rem;
            total=large+total;
        }
        num=num/10;
    }
    printf("total of all digit is %d",total);
    return 0;
}