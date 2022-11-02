#include<stdio.h>
int LCM(int x, int y)
{
    int z;

    if(x>y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    for(;;) 
    {
        if ((z % x == 0) && (z % y == 0)) 
        {
            break;
        }
        ++z;
    }
    return z;
}
int main()
{
    int lcm,a,b;
    printf("Enter two numbers to find LCM : ");
    scanf("%d %d",&a,&b);
    lcm=LCM(a,b);
    printf("LCM of %d and %d is = %d",a,b,lcm);
    return 0;
}