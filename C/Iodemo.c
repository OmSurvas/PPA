#include<stdio.h>

int main()
{
    char Div = '\0';
    int Age = 0;

    
    printf("Enter Your Division : \n");
    scanf("%c", &Div);

    printf("Enter Your Age : \n");
    scanf("%d", &Age);

    
    printf("Your Div Is : %c\n",Div);
    printf("Your Age Is : %d\n",Age);
    return 0;
}