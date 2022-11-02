#include<stdio.h>
int main()
{
    int number[20];
    int max=0;
    printf("Enter any 20 numbers to find out what number is the greatest amongst all ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&number[i]);
        if (number[i]>max)
        {
            max=number[i];
        }
        
    }
    printf("Greatest number is %d ",max);
    return 0;
    
}