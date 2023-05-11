#include <stdio.h>
int stringg();
int main()
{
    printf("Enter sentence: ");
    stringg();
    return 0;
}
int stringg()
{
    char c;
    scanf("%c", &c);

    if (c != '\n')
    {
        stringg();
        printf("%c", c);
    }
}