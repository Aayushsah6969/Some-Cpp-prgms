#include<iostream>
using namespace std;
class poly
{
    public:
    void sum( int a)
    {
        cout<<"The 1 sum is: "<<a+a<<endl;
    }
    void sum(int a, int b)
    {
       cout<<"The 2 sum is: "<<a+b<<endl;  
    }
        void sum(int a, int b, int c)
    {
       cout<<"The 3 sum is: "<<a+b+c<<endl;  
    }
};
int main()
{
    poly ff;
    ff.sum(5);
    ff.sum(12, 3);
    ff.sum(5, 10, 20);
    return 0;
}