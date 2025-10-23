#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        int Addition(int a, int b)    // Concrete
        {
            return a+b;
        }
        virtual int Substraction(int a, int b) = 0;    // Abstract
        
};

class Derived : public Base   
{
    public:
        int x;
        int Substraction(int a, int b) // Concrete
        {
            return a-b;
        }
        int Multilication(int a, int b) // Concrete
        {
            return a*b;
        }
       
};

int main()
{
    
    Base *bp = new Derived(); //UpCasting
    int iRet = 0;

    iRet = bp->Addition(11,10); // 21
    
    iRet = bp->Substraction(11,10); // 1
    
    cout<<iRet<<"\n";
    
    // iRet = bp->Multilication(11,10); // Error
    return 0;
}