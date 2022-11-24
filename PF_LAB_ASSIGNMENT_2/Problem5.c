#include<stdio.h>
int triangularnumber();
int main()
{
    triangularnumber();
    int count=0,sum=0;
    for (int i = 0;; i++)
    {
        // for (int j = 0; j < i; j++)
        // {
            sum+=i;
            if (sum%i==0)
            {

                count++;
                // if (count>=10)
                // {
                    printf("\n%d is a triangular number with over 10 factors",i);
                //     break;
                // }
                
            }
            if (count>=10)
                {
                    break;
                }
            
        // }
        
    }
    
    return 0;
    
}
int triangularnumber()
{
    int input,sum=0;
    printf("Enter a number to find  triangular numbers : ");
    scanf("%d",&input);
    for (int i = 1; i <= input; i++)
    {
        sum+=i;
        if (input%i==0)
        {
            printf("\n%d is it's factor",i);
        }
        
    }
    printf("\nTriangular number is %d",sum);
}