// operator overloading

#include<iostream>
using namespace std;
class demo
{
    public:
    int a[4];
    void getvalue()
    {
        for(int i=0;i<4;i++)
        {
            cout<<"enter number:";
            cin>>a[i];
        }
    }
    void operator+(demo d)
    {
        int answer[4];
        for(int i=0;i<4;i++)
        {
            answer[i]=a[i]+d.a[i];
            cout<<answer[i]<<endl;
        }
    }
};
int main()
{
    demo d1,d2;
    d1.getvalue();
    d2.getvalue();
    d1+d2;
    return 0;
}