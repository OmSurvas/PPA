#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
    void fun()
    {
        cout<<"Inside Base Fun\n";
    }    
};

class Derived : public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
};
int main()
{

    Base bobj;
    Derived dobj;

    bobj.fun();
    dobj.gun();

    return 0;
}