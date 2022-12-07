#include<stdio.h>
int main()
{
    int x[100];
    printf("Enter your name : \n");
    fgets(x, sizeof(x), stdin);
    printf("Name : \n");
    puts(x);
    return 0;
}
