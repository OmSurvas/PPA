#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    printf("Size of Demo is : %lu\n",sizeof(struct Demo));
    return 0;
}