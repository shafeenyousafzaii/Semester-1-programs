#include<stdio.h>
int main()
{
    int x[9]={10,1,2,3,4,5,6,7,8}, count=1,z[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    printf("Enter numbers in an array to find out : \n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i=0;i<9;i++)   
    {
        int count=1;
        for(int j = 2; j < x[i]/2 ; j++)
        {
           
        if (x[i]%j==0)
        {
            printf("%d is Not prime\n",x[i]);
            count=0;
            break;
            
        }
        
        if  (count==1)
        {
            printf("%d is a prime number\n",x[i]);
        }
        }
        
    }
    
    return 0;
}