#include<stdio.h>
int main()
{
    int x[3],sum=0,avg=0,swap,n=3;
    printf("Enter two numbers to find it's sum and avg :");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&x[i]);
            
    }
    sum=x[0]+x[1]+x[2];
    avg=sum/2;
    for (int i = 0 ,  j =n-1 ; i < n/2 ; i++,j--)
    {
        swap=x[i];
        x[i]=x[j];
        x[j]=swap;
       
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nswapped array : %d\n",x[i]);
    }
    
    printf("Sum = %d , Avg = %d  ",sum,avg);
    
    return 0;
    

    
    
    
}