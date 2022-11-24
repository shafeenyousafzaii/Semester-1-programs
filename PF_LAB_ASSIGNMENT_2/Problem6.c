#include<stdio.h>
#include<math.h>
int main()
{
    int x[2],y[2],distance=0,avg,steps=0,dist_travelled=0,i=0;
    printf("Enter co-ordinates of x and y :");
    for(int i=0;i<2;)
    {
    for (int j  = 0; j < 2; )
    {
        scanf("%d %d",&x[i],&y[j]);
    }
    }
    steps=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
    do
    {
         printf("Enter co-ordinates of x and y :");
         for (int i = 0; i < 2; i++)
         {
            scanf("%d %d",&x[i],&y[i]);
         }
         if (x[0]!=x[1] || y[0]!=y[1])
         {
            steps=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
            dist_travelled=dist_travelled+steps;
            distance++;
            x[0]=x[1];
            y[0]=y[1];
         }
         else
         {
            break;
         }
         
         
     i++;   
    } while (i<100);
    
    return 0;
}