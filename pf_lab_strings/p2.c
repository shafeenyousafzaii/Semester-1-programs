#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void vowel(char x[]);
int main()
{
     char x[100],choice[1];
     printf("Enter a string : \n ");
     fgets(x,sizeof(x),stdin);
     printf("Enter your choice : \n");
     printf("\nMenu: \n A): Count the number of vowels in the string \n B): Count both the vowels and consonants in the string \n C): Display the most frequent character in the string. \n D): Concatenate another string with the existing string.\n E): Exit the program. \n : ");
     scanf("%s",choice);
     while (choice[1]!='E' || choice[1]!='e')
     {
        if ((choice[1]='A') || (choice[1]='a'))
        {
         vowel(x);  
        }
        else if ((choice[1]='B')|| (choice[1]='b'))
        {
         printf("Hello b :");
        }
        
        
     }
}
void vowel(char x[])
{
   int length=0,lengthh=0,count=0; char y[11]={'A','a','E','e','I','i','O','o','U','u'};
   length=strlen(x);
   lengthh=strlen(y);
   int count_vowel=0;
   unsigned count=0;
   int c;
   while(x[count]!='\0');
   {
      // for (int j = 0; j < lengthh; j++)
      // {
         if ((x[c]=='a') || (x[c]=='A') || (x[c]=='E')|| (x[c]=='e') || (x[c]=='i') || (x[c]=='I')|| (x[c]=='O')|| (x[c]=='o')|| (x[c]=='U')|| (x[c]=='u'))
          {
            count_vowel++;
         }
         count++;
         
      // }
      
   }
   printf("There are %d number of vowels in this string : \n : ",count);
   

}