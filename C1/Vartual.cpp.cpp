#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};

class Derived : public Base
{
    public:
        int x;
};

int main()
{
     cout<<sizeof(Base)<<"\n"; //8 byte
     cout<<sizeof(Derived)<<"\n"; // 4 byte
    return 0;
}