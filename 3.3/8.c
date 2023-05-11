#include <stdio.h>
#include <string.h>
int main()
{
    char name1[50];
    char name[50];

    printf("Enter name: ");
    gets(name1);
    strcpy(name, name1);
    strrev(name);
    if (strcmp(name1, name) == 0)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }

    return 0;
}