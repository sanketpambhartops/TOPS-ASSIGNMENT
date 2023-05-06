//find out the max number of given//

#include<stdio.h>
int main()
{
    int num,large=0,rem=0;
    printf("Enter any number=");
    scanf("%d",num);
    while(num>0)
    {
        rem=num%10;
        if(rem>large)
        {
            large=rem;
        }
        num=num/10;
    }
    printf("largest digit of the number is %d\n",large);
    return 0;
}