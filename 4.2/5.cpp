//single inheretance

#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    char bname[20];
    int inning,notout,runs;
    int batavg;
    void calcavg()
    {
        batavg=runs/(inning-notout);
    }
public:
    void readdata();
    void displaydata();
};
void batsman::readdata()
{
    cout<<"Enter batsman code:";
    cin>>bcode;
    cout<<"Enter batsman name:";
    cin.ignore();
    gets(bname);
    cout<<"enter innings,notout and runs:";
    cin>>inning>>notout>>runs;
    calcavg();
}
void batsman::displaydata()
{
    cout<<"Batsman code="<<bcode<<"\nbatsman name="<<bname<<"\ninnings="<<inning<<"\nNotout="<<notout<<"\nRuns="<<runs<<"\nAverage="<<batavg;
}
int main()
{
    batsman obj;
    obj.readdata();
    obj.displaydata();
    return 0;
}