#include<stdio.h>
int main()
{
    int x,y,remaining_runs=0;
    printf("Enter Your match score : ");
    scanf("%d",&x);
    printf("Enter Remaining Wickets : ");
    scanf("%d",&y);
    if (x>300)
    {
        printf("Pakistan win the match by %d wickets ",y);
    }
    else if (x==300 && y==10)
    {
        printf("Match is draw ");
    }
    else
    {
        remaining_runs=300-x;
        printf("%d runs remaining with %d wickets ",remaining_runs,y);
    }
    return 0;
    
    
    
}