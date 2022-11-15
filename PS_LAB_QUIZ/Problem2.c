#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,prod=0,sum;
    for (;;a++,b++,c++)
    {
        if (((a*a)+(b*b)+(c*c) == 1000 && (a*a)+(b*b)==(c*c)))  //if the square of three numbers == 1000 and sum of a2 and b2 == c2 then printf done and termminate loop
        {
          
            printf("Done");
            break;   
        }
        
        
    }
    return 0;
}