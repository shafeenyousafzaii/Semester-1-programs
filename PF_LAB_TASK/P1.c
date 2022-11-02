#include<stdio.h>
int main()
{
    int rows=5;
    int columns =5;
	for (int i = 0; i <=rows; ++i)
    {
        for (int j= 1; j <=i; ++j)
        {
            printf(" ");
        }
        for (int k = rows; k > i; k--)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    return 0;
}