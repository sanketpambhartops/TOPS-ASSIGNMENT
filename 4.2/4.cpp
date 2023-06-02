//addition,subtrection,multiplication,divison using constructor

#include<iostream>
using namespace std;
class cals
{
    public:
    int a=10,b=20,sum;
    cals()
    {
        sum=a+b;
        cout<<sum<<endl;
    }
    cals(int x)
    {
        sum=x-b;
        cout<<sum<<endl;
    }
    cals(int s,int p)
    {
        sum=s*p;
        cout<<sum<<endl;
    }
    cals(int q,int z,int m)
    {
        sum=q/z;
        cout<<sum<<endl;
    }
};
int main()
{
    cals c1,c2(50),c3(10,5),c4(88,22,33);
    return 0;
}