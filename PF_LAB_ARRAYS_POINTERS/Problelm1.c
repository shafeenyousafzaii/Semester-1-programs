    #include<stdio.h>
    int SecondMax(int x[]);
    int main()
    {
        int x[10],second_max=x[0];
        printf("Enter 10 elements to input values in the array : \n");
        for (int i = 0; i < 10; ++i)
        {
            printf("\n");
            scanf("%d",x+i);

        }
        SecondMax(x);
        
        
        
        return 0;
    }

    int SecondMax(int x[])
    {
        int second_max=x[0],s_max=0,count=0;
        int *px;
        for (int i = 0; i < 10 ; ++i)
        {
            px=x+i;
            if (*px>second_max)
            { 
                second_max=*px;
                
            }   
        }
        printf("\nMax of *px = %d\n",second_max);
        for (int i = 9; i >= 0; i--)
        {
            if (*(x+i)>s_max   && *(x+i)!=second_max )
            {
                s_max=*(x+i);
                if (*(x+i)!=s_max)
                {
                    s_max=*(x+i);
                }
                
            
                
            }
            
            // if (s_max>x[i])
            // {
            //     continue;
            // }
            

            
            
        }
        printf("%d is the second greatest value",s_max);
        
    }
