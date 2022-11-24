#include<stdio.h>
int main()
{
    int x[2][2],y[2][2],z[2][2];
    printf("Enter values for two matrices to print it's transpose");
    for (int  i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&x[i][j]);
            printf("Enter values for second matrix: ");
            scanf("%d",&y[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 ; i++)
        {
            z[0][j]=x[0][j];
        }
        
    }
    
    
}