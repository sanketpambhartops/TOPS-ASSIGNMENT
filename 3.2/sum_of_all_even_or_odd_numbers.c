//sum of all even or odd numbers//

#include<stdio.h>
int main()
{
    int a,sum=0,even_sum=0,odd_sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    int array[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter values:");        
        scanf("%d",&array[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(array[i] % 2 == 0)
        {
            printf("%d is even\n",array[i]);
            even_sum = even_sum + array[i];
        }
        else
        {
            printf("%d is odd\n",array[i]);
            odd_sum = odd_sum + array[i];
        }
    }
    for(int i=0;i<a;i++)
    {
        sum = sum + array[i];
    }
    printf("sum of all even is %d\n",even_sum);
    printf("sum of all odd is %d\n",odd_sum);
    printf("sum of all digit id %d\n",sum);
    
    return 0;
}