#include<stdio.h>
int main()
{
    int x[3][3],sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d\t",&x[i][j]);
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%3d\t",x[i][j]);
            
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(i==j)
           sum+=x[i][j];
            
        }
       
    }
  printf("%d is the sum ",sum);
}