#include<stdio.h>
int main()
{
    int x[3][3];
    printf("Enter Values in a 2-D array :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d",x[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}
