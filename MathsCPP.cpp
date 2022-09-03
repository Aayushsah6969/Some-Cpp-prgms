#include<iostream>
using namespace std;
class maths
{
    private:
    int a=100;
    int b=200;
    public:
    void sum()
    {
        cout<<"The sum is: "<<a+b<<endl;
    }
    void diff()
    {
        cout<<"The difference is: "<<b-a;
    }
};
int main()
{
    maths obj;
    obj.sum();
    obj.diff();
    return 0;
}