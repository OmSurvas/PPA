#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter The Number Of Elements: \n";
    cin>>length;
    // step 1 : Allocate the memory
    Arr = new int[length];
    if (Arr == NULL)
    {
        cout<<"Unable allocate the memory\n";
    }
    
    else
    {
        cout<<"Memory gets allocate the Successfully\n";
    }

    // step 2 : Use The Memory

    // step 3 : Deallcate  The Memory
    delete []Arr;
    

    return 0;
}