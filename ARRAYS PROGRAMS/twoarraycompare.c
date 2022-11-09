#include<stdio.h>
int main()
{
    char a[10],b[10]={'a','e','i','o','u','A','E','I','O','U'};
    printf("Enter 5 characters to find if there are any vowels in it");
    for (int i = 0; i < 10; i++)
    {
       scanf("\n%c\n",&a[i]);          
       printf("\n : %c : \n",a[i]);
    }
    for (int i = 0, j=0; i < 5 , j<10; i++ , j++)
    {
      if (a[i]==b[i])
    {
      printf("Vowel ");
    }
    

    }
    
}
    