#include<stdio.h>
int main()
{
    int x[3][4],max=0;
    printf("Enter values of a 3x4 matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (x[i][j]>max)
            {
                max=x[i][j];
            }
            
        }
        
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d\t",x[i][j]);
            
        }
        printf("\n");
        
    }
    printf("%d is the maximum number : \n",max);
    return 0;
    
    
}