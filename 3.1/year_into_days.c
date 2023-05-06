//year into days & days into year//

#include<stdio.h>
int main()
{
    int year;
    float days,years;
    printf("Enter a days=");
    scanf("%f",&days);
    printf("Enter year");
    scanf("%d",&year);
    year=days/365;
    days=years*365;
    printf("%.2f year\n%.0f days\n",year,days);
    return 0;

}