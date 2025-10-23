#include<stdio.h>
int main()
{
    char cValue = 's';
    int iValue = 11;
    float fValue = 78.53f;
    double dValue = 90.282733;

    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fValue);
    printf("%lf\n",dValue);

    printf("Size of Charater : %lu\n", sizeof(cValue));
    printf("Size of intiger : %lu\n", sizeof(iValue));
    printf("Size of flout : %lu\n", sizeof(fValue));
    printf("Size of double : %lu\n", sizeof(dValue));

    return 0;
}