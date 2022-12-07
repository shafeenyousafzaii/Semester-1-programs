#include<stdio.h>
int findmode(int x[]);
int main()
{
    int x[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("\n%d",x+i);
    }
    printf("Activating function: \n");
    findmode(x);
    
    return 0;
}
int findmode(int x[])
{
    int var;
    int count=0,value,countt=0;
    for (int i = 0; i < 10; i++)
    {
          count=0;
        for (int j = i+0;j<10 ; j++)
        {
          
             if (x[i]==x[j])
             {
                count++;
                
                
                value=x[i];
                printf("\n%d has occured %d times ",value,count);
                if(count>countt)
                {
                 countt=count;
                 var = value;   
                
                }
                // }
             }
             
             
        }
        // if ()
        // {
        //     /* code */
        // }
        
        
    }
    printf("\n%d is occured %d times",var,countt);

    
}
