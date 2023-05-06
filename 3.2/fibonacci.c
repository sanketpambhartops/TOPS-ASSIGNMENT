//print fibonacci series//

#include<stdio.h>
int main()
{
    int a=0,b=1,n,temp=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0;i<n-2;i++)
    {
        temp=a+b;
        printf("%d",temp);
        a=b;
        b=temp;
        printf("\n");
    }
    
    return 0;
}