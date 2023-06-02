//function overloading

#include<iostream>
using namespace std;
class calculation
{
    public:
    int a=9,b=7,ans;
    void calculator()
    {
        ans=a+b;
        cout<<ans<<endl;
    }
    void calculator(int t)
    {
        ans=a-t;
        cout<<ans<<endl;

    }
    void calculator(int m, int p)
    {
        ans=m*p;
        cout<<ans<<endl;
    }
    void calculator(int x, int y,int z)
    {
        ans=x/z;
        cout<<ans<<endl;
    }

};
int main()
{
    calculation c1;
    c1.calculator();
    c1.calculator(5);
    c1.calculator(34,3);
    c1.calculator(3,4,5);

    return 0;
}