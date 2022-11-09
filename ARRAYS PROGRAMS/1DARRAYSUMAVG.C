#include<stdio.h>
int sum(int x[10])
{
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=x[i];
        
    }
}
int main()
{
    int x[10], y[10],avg=0,z=0;
    printf("ENter any ten numbers to find their sum and avg : ");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&x[i]);
        
    }
    
    for (int  i = 0; i < 10; i++)
    {
       z=z+sum(x[i]);
    }
    
    avg=z/10;
    printf("The sum for ten numbers is : %d and the avg for ten numbers is %d ",z,avg);
    
    
    

}