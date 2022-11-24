#include<stdio.h>
int find_small_val(int x[],int N );
int main()
{
     int x[6]={1,2,3,4,5,6},small_val=0,N=6;
     small_val=find_small_val(x,N);
     printf("%d",small_val);
     return 0;

}
int find_small_val(int x[] , int N )
{
    int small=0,y=0;
    for (int i = 1; ; i++)
    {
        for(int j=0;j<N;j++)
        {
        if (x[j]==y)
        {
            break;
            
        }
        y++;
        small=y;

        
        }
    }
    return small;
}