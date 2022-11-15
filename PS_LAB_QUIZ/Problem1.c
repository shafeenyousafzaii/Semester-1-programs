#include<stdio.h>
int main()
{
    int x[7] , min=x[0], minn=0;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter 7 integers : ");
        scanf("%d",&x[i]);
    }
    for ( int j=0 , i=0; i < 7 , j<7 ; i++,j++)
    {
        if (min<x[i])
        {
            minn=x[i]; //min has lowest value 
            if (minn<x[i]) //we check if there is any other lesser value than min.
            {
                minn=x[i];
                break;
            }
            
        }

        
    }
    printf("Minimum = %d",minn);
    return 0;
    
}