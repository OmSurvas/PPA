#include<stdio.h>
#include<stdlib.h>
int main()
{
    int lenght = 0;
    int *Arr = NULL;

    printf("Enter The Number Of Elements : \n");
    scanf("%d",&lenght);

    Arr = (int *)malloc(lenght * sizeof(int));
    if (Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Successfuly allocate a memory\n");

    }
    free(Arr);

    return 0;
}