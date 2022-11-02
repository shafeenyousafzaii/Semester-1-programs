#include<stdio.h>
int fict(int x)
{
   int f=1; 
   for (int i=1;  i<=x ;i++)
   {
     f*=i;
   }
   return f;
   
}
int main()
{
   int n,y,x,z,r;int ncr;
    printf("Enter a number to find its Combination(nCr) for given values of n and r: \n");
    scanf("%d  %d",&n , &r);
    z=(n-r);
    z=fict(z);
    x=fict(n);
    y=fict(r);
    ncr=x/(y*z);
    printf("nCr for n=%d and r=%d is %d",n,r,ncr);
    return 0;
} 