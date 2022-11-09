#include<stdio.h>
#include<stdlib.h>
int player_guess(int num1,int num2,int sum);
int computer_guess(int c_guess);
int main()
{
int c_guess;
int num1;
int num2;
int sum;
int r;
int initial_capital=r;
printf ("enter number of round you want to play");
scanf("%d",&r);
int a=computer_guess(c_guess);
int b=player_guess(num1,num2,sum);
for(int i=0;i<=r;i++)
{
if (a=b)
printf("%d earn by you\n",b);
else
printf("you lose 10pkr");                               
}
int computer_guess(int c_guess);
{
int lower=3;
int upper=20;
c_guess=(rand()%(upper-lower+1))+lower;
return c_guess;
}
int player_guess(int num1,int num2,int sum);
{
num1=rand()%10;
num2=rand()%10;
sum=num1+num2;
return sum;
}
}
