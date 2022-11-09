#include<stdio.h>
int main()
{
    char membership[4]={'M','m','N','n'},status; int age;
    printf("Enter your membership status/t: \nEnter M or m if you are a member\t:\n Enter N or n if you are not a member:");
    scanf("%c",&status);
    printf("Enter Age : ");
    scanf("%d",&age);
    // for (int i = 0; i < 4; i++)
    // {
        if ((status==membership[0] || status==membership[1]) && (age<65) )
        {
            printf("$10 is the fee");
        }
        else if ((status==membership[0] || status==membership[1]) && (age>=65))
        {
            printf("$5 is the fee");
        }
        else if ((status==membership[2] || status==membership[3]))
        {
            printf("$20 is the fee for non members");
        }
        
        
        
    // }
    

}