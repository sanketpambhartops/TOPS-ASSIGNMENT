#include<stdio.h>
int main()
{
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printf("monday");
            break;
        }   
        case 2:
        {
            printf("tuseday");
            break;
        }   
        case 3:
        {
            printf("wednesday");
            break;
        }   
        case 4:
        {
            printf("thursday");
            break;
        }   
        case 5:
        {
            printf("friday");
            break;
        }   
        case 6:
        {
            printf("saturday");
            break;
        }   
        case 7:
        {
            printf("sunday");
            break;
        }   
        default:
        {
            printf("Enter between 1 to 7");
            break;
        }
    }
    return 0;
}