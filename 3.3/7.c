// find out the length of string without using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    char name[100];

    printf("Enter your string: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
        ;

        printf("length of string is %d",i);

    return 0;
}