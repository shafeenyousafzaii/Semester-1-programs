#include<stdio.h>
int perfectnumber()
{
    int num, i,original_number,sum=0;
    printf("\nEnter an integer to find if it is a perfect number or not :  ");
    scanf("%d", &num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            sum=sum+1;
            if (original_number==sum)
            {
                printf("%d is a Perfect number ",num);
            }
            

        }
    }
    return i;
}


int amstrong()
{
    int num, originalNum, remainder, result = 0,count=0;
    printf("Enter a three-digit integer to find if it is an armstrong number or not : \n ");
    scanf("%d", &num);
    originalNum = num;

    do 
    {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
       count++;
    }
    while (originalNum!=0)
    
    

    ;if (result == num)
    {
        printf("%d is an Armstrong number. and it was a %d digit number", num,count);
    }
    else
    {
        printf("%d is not an Armstrong number : , and it was a %d digit number", num,count);
    }
    return num;
}

int main()
{
     int x,y;
     x=amstrong();
     y=perfectnumber();
     

} 