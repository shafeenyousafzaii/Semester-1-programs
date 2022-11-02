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
int power(int x,int y)
{
    int powerr=1;
    for (int i = 1; i <= y; i++)
    {
        powerr=powerr*x;
    }
    
    return powerr;
}
    
    

int  main()
{
    int n,x;
    float ans=0;
    printf("Enter the  value of n to find it a series of : exponent of number divided by it's fictorial");
    scanf("%d",&n);
    printf("Enter the  value of x to find it a series of : exponent of number divided by it's fictorial");
    scanf("%d",&x);

    for (int k = 0; k <= n; k++)
    {
        ans=ans+( (1.0*power(x,k)) / fict(k) );
    }
    printf("%.3f",ans);

   return 0;
}
