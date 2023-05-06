//leap year or not//

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year=");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("This year is leap year");
    }
    else
    {
        printf("This year is not leap year");
    }
    return 0;
}