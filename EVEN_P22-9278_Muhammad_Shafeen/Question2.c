#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int find_number_of_digits(int x);
int main()
{
    int number,digits,number_of_digits,num=0;
    
    printf("\nEnter a number to multiply it with jack's fav number 5 :\n");
    
    scanf("%d",number);
    digits=find_number_of_digits(number);
    printf("%d number of digits in this number",digits);
    num=pow(number,digits);
    return 0;
}

int find_number_of_digits(int x) 
{ 
    int originalNum;
    originalNum=x;
    int count=0;
    for (int i = 0; i < x; i++)
    {
        x=x/10;   
        count++; 
    }
    // do
    // {
    //     x/=10;
    //     count++;
    // }while (x!=0);
    
    return count;

}