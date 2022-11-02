#include<stdio.h>
int perfectnumber();
int main()
{
    perfectnumber();
    return 0;   
}
int perfectnumber()
{
    int x,y,sum;
    printf("Enter if a number is perfect number or not : ");
    scanf(" %d ",&x);
    for (int i = 0; i <= x; i++)
    {
        if (x%i==0)
        {
            sum+=i;
    
        }

        
        
    }
    if (x==sum)
        {
            printf(": This number is a perfect number : ");
        }

    
    
}
