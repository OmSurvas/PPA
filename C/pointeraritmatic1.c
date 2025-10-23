#include<stdio.h>
int main()
{

    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Data fetch by p : %d\n",*p); // 11
     printf("Data fetch by q : %d\n",*q); // 111
    return 0 ;
}