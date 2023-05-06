//you have to make a summation of first and last Digit//

#include <stdio.h>
int main()
{
    int num, k, div = 1, i, j, rem, f_digit, l_digit;

    num = 4587;

    l_digit = num % 10;
    k = num;
    while (k > 0)
    {
        k = k / 10;
        div = div * 10;
        // printf("%d\n",k);
    }
    k = num;
    f_digit = k / (div / 10);

    printf("last is %d and first is %d", l_digit, f_digit);

    return 0;
}