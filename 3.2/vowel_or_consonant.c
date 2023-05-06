//check you where enter a value is vowel or conconant using switch case//

#include<stdio.h>
int main()
{
    char s;
    printf("Enter charecter=");
    scanf("%c",&s);
    switch(s)                     //switch case//
    {
        case 'a':
        {
            printf("This charecter is vowel");
            break;
        }
        case 'e':
        {
            printf("This charecter is vowel");
            break;
        }
        case 'i':
        {
            printf("This charecter is vowel");
            break;
        }
        case 'o':
        {
            printf("This charecter is vowel");
            break;
        }
        case 'u':
        {
            printf("This charecter is vowel");
            break;
        }
        default:
        {
            printf("This charecter is consonant");
            break;
        }
    }
    return 0;
}