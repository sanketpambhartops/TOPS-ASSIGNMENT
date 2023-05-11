#include <stdio.h>
int fact(int a)
{
    if (a > 1)
    {
        return a * fact(a - 1);
    }
}
int main()
{
    int n;
    printf("Enter value for factorial: ");
    scanf("%d",&n);
    int x = fact(n);
    printf("%d", x);
    return 0;
}