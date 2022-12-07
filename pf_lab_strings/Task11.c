#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char x[50];
    printf("Enter a string element : \n");
    fgets(x,sizeof(x),stdin);
    int k=0;
    int length=0;
    length=strlen(x);   
    length=length-1;
    while (length>k)
    {
        if (x[length]!=x[k])
        {
            printf(" \n %s is not a Palindrome:\n",x);
            exit(0);
        }
        length--;
        k++;
    }
    printf("%s Palindrome",x);
    
    return 0;
}
