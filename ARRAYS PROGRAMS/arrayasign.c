#include<stdio.h>
int avg(int);
int sum(int,int);
int main()
{
    int z,summ,y,z,avgg[5];
    printf("Enter any 5 numbers to find it's average : ");
    scanf("%d",&avgg[5]);
    z=avg(avgg[5]);
    y=sum(avgg[5]);
    printf("%d is the avg of these numbers and %d is the sum of these numbers : ");
    return 0;
}
int avg(int x[5])
{
      int avg,sum;
      sum+=x[5];
      avg=sum/5;
      return avg;
    
}
int sum(int y[5])
{
    int sum=0;
    sum+=y[5];
    return sum;
}