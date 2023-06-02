//cubic values using inline function 

#include<iostream>
using namespace std;
class cub
{
public:
    int a,ans;
    void getvalue()
    {
        cout<<"Enter number:";
        cin>>a;
    }
    void showdata()
    {
        ans=a*a*a;
        cout<<"Answer is="<<ans;
    }
};
int main()
{
    cub a1;
    a1.getvalue();
    a1.showdata();   
    return 0;
}