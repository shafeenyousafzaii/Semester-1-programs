#include<stdio.h>
int display(int x[]);
int main()
{
    int x[8]={44,30,24,32,35,40,38,15},rows,colums,stocks,day,ans;
    display(x);
    rows;
    colums;
    for (int rows = 0; rows < 8; rows++)
    {
        for (int colums = 0; colums < 8; colums++)
        {
            // if we multiply each entitiy with entire row and the product is greater than the entity then we can substract that entity from the the bought enitity
            if (x[rows] * x[colums] > x[rows])
            {
                ans=x[rows]-x[colums];
                if(ans>0)
                {
                printf("\n %d is the profit on day %d",ans,rows);
                // we are displaying profit with respect to each day
                }
                else if (ans < 0)
                {
                  printf("\n -1");
                  // we are giving an output of -1 for each loss 
                }
                
            }
            
        }
        
    }
    printf("\n%d is the profit. ",ans);
    return 0;
}
int display(int x[])
{ 
    printf("Prices of stocks are below : \n");
    for (int i = 0; i < 8; i++)
    {
        printf("$%d\t",x[i]);
    }
    
}
