#include<stdio.h>
int main()
{
    int x[2][2],y[2][2];
    printf("Enter Elements in a matrix to take transpose: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           scanf("%d",&x[i][j]);
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           printf("%3d\t",x[i][j]);
            
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          y[i][j]=x[i][j];
        //    x[1][j]=x[1][j];
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           printf("%3d",y[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}