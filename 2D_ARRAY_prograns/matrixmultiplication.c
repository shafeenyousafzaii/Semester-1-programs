#include<stdio.h>
// int inputt(int,int); was trying to take input with a function but too young for that xD.
int main()
{
    int x[2][3] , y[2][3] , z[2][3];
    printf("Enter values to form an 2D-Array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number: ");
            scanf("%d",&x[i][j]);
           

        }
        // if (i==1)
        // {
        //     printf("Enter Values for second matrix")
        // }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            printf("Enter numbers for second matrix: ");
            scanf("%d",&y[i][j]);

        }
        // if (i==1)
        // {
        //     printf("Enter Values for second matrix")
        // }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            z[i][j]=x[i][j]*y[i][j];
        }
        
    }
    
    printf("Displaying numbers : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d",z[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
    
}
