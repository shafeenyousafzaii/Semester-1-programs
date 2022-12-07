    #include<stdio.h>
    #include<time.h>
    int random();
    int main()
    {
        int x[10],ran,countt=0,value;
        
        for (int i = 0; i < 10; i++)
        {
            ran=random();
            x[i]=ran;   
        }
        for (int i = 0; i < 10; i++)
        {
            int count=0;
            for (int j = 0; j < 10; j++)
            {
                if (x[i]==x[j])
                {
                    count++;
                    value=x[i];
                if (count>countt)
                {
                    countt=count;
                    value=x[i];
                }
                
                }
                
            }
            
        }
        printf("%d has occured %d times",value,countt);
        
        return 0;
    }
    int random()
    {
    int random;
    srand(time(NULL));
    random=(rand()%90);
    return random;
    }
