#include<stdio.h>
int main()
{
    int x[10];
    printf("Enter any ten numbers : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d",x[i]);
    }
    return 0;
    

}