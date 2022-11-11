#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number to swap them : ");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swapped numbers are %d and %d",x,y);
    return 0;
}