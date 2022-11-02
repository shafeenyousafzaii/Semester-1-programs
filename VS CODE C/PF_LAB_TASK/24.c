#include<stdio.h>
int main()
{
    int count=0;
    for (int i = 1; ; i++)
    {
        int add=0;
            for (int j = 1;j<i; j++)
            {
                     if (i%j==0)
                    {
                        add=add+j;
                    }
            }
                   
                if(add==i)
                {
                    printf("%d is a perfect number \n",i);
                   count++;
                    
                }
                if (count==4)
                {
                    break;

                }
                
    }   
    return 0;   
}