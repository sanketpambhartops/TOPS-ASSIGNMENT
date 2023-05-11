#include <stdio.h>
struct employee
{
    char empno[13];
    int age;
    char empname[50], address[150];
};
int main()
{
    int i, n = 1;
    struct employee e[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter employee name: ");
        gets(e[i].empname);
        printf("Enter employee no: ");
        gets(e[i].empno);
        printf("Enter employee address: ");
        gets(e[i].address);
        printf("Enter employee age: ");
        scanf("%d", &e[i].age);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        printf("Employee name: %s\n", e[i].empname);
        printf("Employee no: %s\n", e[i].empno);
        printf("Employee age: %d\n", e[i].age);
        printf("Employee address: %s\n", e[i].address);
    }
    return 0;
}