//else if 
#include<stdio.h>
int main()
{
    float percent;
    printf("Enter percent=");
    scanf("%f",&percent);
    if(percent>90 && percent<=100)
    {
        printf("Grade A1");
    }
    else if(percent>80 && percent<=90)
    {
        printf("Grade A2");
    }
    else if(percent>70 && percent<=80)
    {
        printf("Grade B1");
    }
    else if(percent>60 && percent<=70)
    {
        printf("Grade B2");
    }
    else if(percent>50 && percent<=60)
    {
        printf("Grade C1");
    }
    else if(percent>40 && percent<=50)
    {
        printf("Grade C2");
    }
    else if(percent>33 && percent<=40)
    {
        printf("Grade D");
    }
    else if(percent>0 && percent<=33)
    {
        printf("FAIL");
    }
    else
    {
        printf("Enter poercentage Between 1 to 100");
    }
    return 0;
}