#include<stdio.h>
int main()
{
    int x[10]={1,2,3,4,5,6,7,3,2},y[6]={1,2,3,5,7},array_length=0,z[10];
    printf("Enter an array : \n ");
    // for (int  i = 0; i <10  ; i++)
    // {
    //     scanf("%d",x[i]);
    // }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; i++)
        {
            if (x[i]==y[j])
            {
                z[i]=x[i];
                if (x[i]!=y[j])
                {
                    z[i]=x[i];
                }
                
            }
            
        }
        
    }
    printf("Union of array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",z[i]);
    }

    
    return 0;
}
