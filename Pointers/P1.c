// #include<stdio.h>
// int main()
// {
//     int *p,c;
//     c=25;
//     p=&c;
//     c=*p;
//     printf("%d",c);
//     printf("%d",&c);

//     return 0;
// }

#include <stdio.h>
int main()
{
  int var = 5,x=10;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p /n %p", &var , &x);  
  return 0;
}







































