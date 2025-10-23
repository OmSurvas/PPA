#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;
        
        Demo()
        {
            this->i = 0;
            this->j = 0;
        }
        Demo(int a,int b)
        {
            this->i = a;
            this->j = b;
        }

        void Fun()
        {
            cout<<"Inside Fun\n";
            cout<<"Value Of i is : "<<this->i<<"\n";
            cout<<"Value Of j is : "<<this->j<<"\n";
            cout<<"Value Of x is : "<<x<<"\n";
        }
        static void Gun()
        {
            cout<<"Inside Gun\n";
        }
};

int Demo :: x = 11;


int main()
{
    Demo::Gun();
    cout<<"Value Of X is : "<<Demo::x<<"\n";

    Demo obj(10,20);

    obj.Fun();

    return 0;
}