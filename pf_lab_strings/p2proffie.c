#include <stdio.h>
#include <string.h>
int cwc(char *name);
int cw(char *name)
{
    int c=0;
    int count=0;
    while (name[c] != '\0') {
    if (name[c] == 'a' || name[c] == 'A' || name[c] == 'e' || name[c] == 'E' || name[c] == 'i' || name[c] == 'I' || name[c] =='o' || name[c]=='O' || name[c] == 'u' || name[c] == 'U')
      count++;
    c++;
     
}
  printf(  "\nNumber of vowels in the string: %d\n", count);
  printf(  "\n----------------------------------\n");
}
int cwc(char *name)
{
    int c=0;
    int count=0,s=0;
    while (name[c] != '\0')
     {
    if (name[c] == 'a' || name[c] == 'A' || name[c] == 'e' || name[c] == 'E' || name[c] == 'i' || name[c] == 'I' || name[c] =='o' || name[c]=='O' || name[c] == 'u' || name[c] == 'U')
      count++;
     else {
       s++;
     }
     c++;   
}
  printf(  "Number of vowels = %d & consonent = %d\n", count,s);
  printf(  "\n-----------------------------------\n");
}
int c(char *name , char *n2)
{
{

   strcat(name,n2);
}
  printf(  "\nconcatinate of two strings: %s\n", name);
  printf(  "\n----------------------------------\n");
}
int f(char *name){
     int i, l;
     int alp;
     l=strlen(name);
     int max=0, x=0;
     for(i=0;i<l;i++)
     {
         if(name[i]==name[i++])
         {
             x++;
             
         }
         if(max<x)
             max=x;
             alp=name[i];
           
     }
  printf(  "\nmost frequent char: %c\n", alp);
  printf(  "\n----------------------------------\n");
     
 }
int main()
{
    char  name[100],name2[100],x;
    for(int i=1;i>0;i++)
    {
        printf("Enter a string: ");
    scanf("%s", name);
       printf("press A to count the number of wovels\n ");
        printf("press B to count both wovels and cont\n ");
       printf("press C to most freequent char\n ");
       printf("press D concatinate\n ");
       printf("press E to exit\n ");
       scanf("\n%c",&x);
       if (x=='A') 
       {
       cw( name);
       }
    if (x=='B') 
       {
       cwc( name);
       }
       if (x=='D') 
       {
        printf("Enter 2nd string: ");
    scanf("%s", name2);
       c( name,name2);
       }
      if (x=='C') 
       {
       f(name); 
    }
    if (x=='E') 
       {
       break;
    }
    }

    return 0;
}