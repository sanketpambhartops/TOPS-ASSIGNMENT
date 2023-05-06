//area of circle//

#include<stdio.h>
int main()
{
    float pie=3.14;
    int radius;
    printf("enter the area of circle=");
    scanf("%d",&radius);
    printf("your radius is %d \n",radius);
    float area=(float)(pie*radius*radius);
    printf("the area of circle is %f\n",area);

    return 0;
}