#include<stdio.h>
int main()
{
    int alpha[60],square=1,cube=1,sum_of_last_60=0,sum_square=0,sum_cube=0,sum_of_last_indices=0;
    for (int i = 0; i <20; i++)
    {
        square=i*i;
        alpha[i]=square;
        sum_square=alpha[i];
    }
    for (int i = 20; i < 40; i++)
    {
        cube=i*i*i;
        alpha[i]=cube;
        sum_cube=alpha[i];
    }
    sum_of_last_indices=sum_square+sum_cube;
    for (int i = 40 ; i < 60; i++)
    {
        sum_of_last_60=sum_of_last_indices;
    }
    for (int i = 0; i < 20; i++)
    {
        if(alpha[i]<=10)
        printf("%d\t",alpha[i]);
        if(alpha[i]>10)
        {
            printf("%d \t",alpha[i]);
        }
    }
    for (int i = 20; i < 40; i++)
    {
        if (alpha[i]<=30)
        {
            printf("\t%d",alpha[i]);
        }
        if (alpha[i]>30)
        {
            printf("\t%d",alpha[i]);
        }
        
        
    }
    for (int i = 40 ; i < 60; i++)
    {
        if(alpha[i]<=50)
        {
            printf("%d \t",alpha[i]);
        }

        if (alpha[i]>50)
        {
            printf("%d\t",alpha[i]);
        }
        
    }

    
 return 0;   
    
    
}