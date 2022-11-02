#include <stdio.h>
 
void main()
{
    int x, rem, sum = 0, i; 
    printf("Enter a number\n");
    scanf("%d", &x);
    for (i = 1; i < x; i++)
    {
        rem = x % i;
        if (rem == 0)
        {
            x = x + i;
        }
    }
    if (x == x)
    {
        printf(" %d is a Perfect Number",x);
    }
    else
        printf("\n %d is not a Perfect Number",x);

}