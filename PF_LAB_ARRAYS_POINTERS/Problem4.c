#include<stdio.h>
int common(int x[],int y[]);
int main()
{
    int x[10]={1,2,3,4,5,6,3,2},y[10]={1,3,5,7},z[10];
    printf("Enter elements in both arrays and find intersection of these two arrays : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",x+i);
        
    }
    printf("Enter elements in array two : ");
    for (int j = 0; j < 10; j++)
    {
        scanf("%d",y+j);
    }
    common(x, y);
    
    
    return 0;
}
int common(int x[],int y[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (x[i]<x[j])
            {
                i++;
            }
            else if (x[j]<x[i])
            {
                j++;
            }
            else if (x[i]==y[j])
            {
                printf("%d",x[i]);
                i++;
                j++;
            }
            
        
            
        }
        
    }
    
}
