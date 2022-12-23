#include<stdio.h>
int main()
{ 
    int usman[3];
    printf("Enter Numbers : \n");
    for (int i = 0; i <3 ; i++)
    {
        scanf("%d",&usman[i]);
        for (int j = 1; j == 1;)
        {
            if (j==1)
            {
                usman[j]=6;
            }break;
            
        }
    }
    for (int i = 0; i <3 ; i++)
    {
        if (i==0)
        {
            printf("{");
        }
        
        printf("%d,",usman[i]);
        
            // if (usman[i]%2==0)
            // {
            //     printf("\n%d is Even:",usman[i]);
            // }
        
    }
    printf("}");
    
    return 0;
}

