#include<stdio.h>
int main()
{
int b;
int f;
int cf;
int s1;
int s2;
int s3;
int s4;
printf("Dear customer enter your budget\n");
scanf("%d",&b);
int n;
printf("select icecream type\n");
printf("enter 1 for cone type\nenter 2 for cups\n");
scanf("%d",&n);
// for(int i=0;i<=b;)
// {
if(n==1)
{
printf("choose flavor\n enter 1 for choclate\n enter 2 for Vanila\n enter 3 for strawberry\n enter 4 for oreo\n");
scanf("%d",&f);
if (f==1)
{
printf("total is 200");
}
else if (f==2)
{
printf("total is 250");
}
else if (f==3)
{
printf ("total is 200");
}
else if(f==4)
{
printf("total is 250");
}
}
else if(n==2)
{
printf("choose flavor\nenter 5 for choclate\n enter 6 for Vanila\n enter 7 for strawberry\n enter 8 for oreo\n");
scanf("%d",&cf);
if(cf=5)
{
printf("choose size\n s=200pkr\n m=250\n l=300");
scanf("%d",&s1);
}
else if(cf==6)
{
printf("choose size\n s=250pkr\n m=300\n l=350");
scanf("%d",&s2);
}
else if(cf==7)
{
printf("choose size\n s=200pkr\n m =250\n l=300");
scanf("%d",&s3);
}
else if(cf==8)
{
printf("choose size\n s=250pkr\n m=300\n l=400");
scanf("%d",&s4);
}
}
}
// }
