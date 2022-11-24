#include<stdio.h>
int main()
{
    int x,div=0,rem=0,num=0,orig_num,three_digit,max=0;
    printf("\nEnter a number to check if it is a PALINDROME or not :");
    scanf("%d",&x);
    orig_num=x;
    for(;x!=0;)
    {
    rem=x%10;
    num=(num*10) + rem;
    x=x/10;
    }
    if(orig_num==num)
    printf("%d is a palindrome\n",orig_num);
    else
    printf("%d is not a palindrome number :\n",orig_num);
   
    for (int i = 000; i <1000; i++)
    {
        for (int j = 000; j < 1000; j++)
        {
          for (int k = 000; k <1000; k++)
          {
            three_digit=i*j*k;
            rem=three_digit*10;
            num=(num*10) + rem;
            three_digit=three_digit/10;
            if (three_digit==three_digit)
            {
              max=three_digit;
            }
            
            
          }
            
        }
        
    }
    
    printf("%d is the largest palindrome  number of a three digit number : ",max);
    return 0;
}