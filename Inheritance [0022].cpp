#include<iostream>
using namespace std;
class parent
{
    public:
    void house()
    {
        cout<<"5 wota building xa"<<endl;
    }
    void gadi()
    {
        cout<<"honda city, Rx100, Rajdoot"<<endl;
    }
};
class child:public parent
{
    void property()
    {
        cout<<"1 - 2 wota building"<<endl;
    }
    void Gaadi()
    {
        cout<<"raajdoot"<<endl;
    }
};
int main()
{
    child pp;
    pp.gadi();
    pp.house();
    return 0;
}
//Rozeen
