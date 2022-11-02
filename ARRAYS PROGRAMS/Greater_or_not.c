#include<stdio.h>
int main()
{
    int number,i,sum,marks[10]={1,2,3,4,5};
    int min=marks[0];
    printf("Enter 10 numbers /n" );
    printf("Enter numbers to find which one is the smallest number : ", i+1);
    for (int i = 0; i < 10; i++)
    {
        
        scanf("%d",&marks[i]);
        
        if (marks[i]<min)
        {
            min=marks[i];
        }
        
        


    }
    printf("minimum = %d ",min);
    
}