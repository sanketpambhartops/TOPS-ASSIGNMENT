#include <stdio.h>
struct employee
{
    char empno[14], empname[50], address[100], age[4], mobile[14];
};
int main()
{
    int n = 5, i;
    struct employee e[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter details for employee no %d\n", i + 1);
        printf("Enter employee's name: ");
        gets(e[i].empname);
        printf("Enter employee's address: ");
        gets(e[i].address);
        printf("Enter employee's age: ");
        gets(e[i].age);
        printf("Enter employee's mobile number: ");
        gets(e[i].mobile);
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("details for employee no %d\n", i + 1);
        printf("employee's name: %s\n", e[i].empname);
        printf("employee's address: %s\n", e[i].address);
        printf("employee's age: %s\n", e[i].age);
        printf("employee's mobile no: %s\n", e[i].mobile);
        printf("\n");
    }

    return 0;
}