#include<stdio.h>
int main()
{
    int x[2][2][2],z[1][2][2];
    printf("Enter elements in a matrix of 2x2 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d",&x[i][j][k]);
            }
            
        }
        if(i==0)
        printf("\nEnter elements in second matrix : ");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int  j = 0; j < 2; i++)
        {
            for (int  k = 0; i < 2; i++)
            {
                z[i][j][k]=x[i][j][k]*x[i][j][k];

            }
            
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; i++)
        {
            for (int k = 0; k <2; k++)
            {
                printf("\t%3d",z[i][j][k]);
            }
            
            
        }
        printf("\n");
    }
    
    
    

}