#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
bool symmetric(int x[4][4]);
int main()
{
    int x[4][4],y[4][4],loop_limit,z[4][4]={0};
    srand(time(NULL));
    loop_limit=4;
    for (int i = 0; i < loop_limit ; i++)
    {
        for (int j = 0; j <  loop_limit ; j++)
        {
            x[i][j]=rand() % 100 + 1 ;
        }
        
    }

    for (int i = 0; i < loop_limit ; i++)
    {
        for (int j = 0; j <  loop_limit ; j++)
        {
            y[i][j]=rand() % 100 + 1 ;
        }
        
    }
    
    for (int i = 0; i < loop_limit ; i++)
    {
        for (int j = 0; j <  loop_limit ; j++)
        { 
            if (i==j)
            {
               y[i][j]=x[i][j];
            }
            
            
        }
        
    }
    
    // for (int i = 0; i < loop_limit; i++)
    // {
    //     for (int j = 0; j < loop_limit; i++)
    //     {
            z[0][0]=(((y[0][1]+y[1][1]+y[1][0])*(1.0))/y[0][0]);
            z[0][1]=(((y[0][0]+y[0][2]+y[1][0]+y[1][1]+y[1][2])*(1.0))/y[0][1]);
            z[0][2]=(((y[0][3]+y[0][1]+y[1][1]+y[1][2]+y[1][3])*(1.0))/y[0][2]);
            z[0][3]=(((y[0][2]+y[1][3]+y[1][2])*(1.0))/y[0][3]);
   
            z[1][0]=(((y[0][0]+y[0][1]+y[1][1]+y[2][1]+y[2][0])*(1.0))/y[1][0]);
            z[1][1]=(((y[0][0]+y[0][1]+y[0][2]+y[1][2]+y[2][2]+y[2][1]+y[2][0]+y[1][0])*(1.0))/y[1][1]);
            z[1][2]=(((y[1][1]+y[0][1]+y[0][2]+y[0][3]+y[1][3]+y[2][1]+y[2][2]+y[2][3])*(1.0))/y[1][2]);
            z[1][3]=(((y[0][2]+y[0][3]+y[1][2]+y[2][2]+y[2][3])*(1.0))/y[1][3]);
    
            z[2][0]=(((y[1][0]+y[1][1]+y[2][1]+y[3][1]+y[3][0])*(1.0))/y[2][0]);
            z[2][1]=(((y[2][0]+y[1][0]+y[1][1]+y[1][2]+y[2][2]+y[3][2]+y[3][1]+y[3][0])*(1.0))/y[2][1]);
            z[2][2]=(((y[1][1]+y[1][2]+y[1][3]+y[2][3]+y[2][2]+y[3][1]+y[3][2]+y[3][3])*(1.0))/y[2][2]);
            z[2][3]=(((y[1][3]+y[1][2]+y[2][2]+y[3][2]+y[3][3])*(1.0))/y[2][3]);
    
            z[3][0]=(((y[2][0]+y[2][1]+y[3][1])*(1.0))/y[3][0]);
            z[3][1]=(((y[2][0]+y[2][1]+y[2][2]+y[3][0]+y[3][2])*(1.0))/y[3][1]);
            z[3][2]=(((y[3][1]+y[3][3]+y[2][1]+y[2][2]+y[2][3])*(1.0))/y[3][2]);
            z[3][3]=(((y[3][2]+y[2][2]+y[2][3])*(1.0))/y[3][3]);

    
            // z[i][j]=y[i][j]+y[i][j]
    //     }
        
    // }
    symmetric(z);
    printf("\nMatrix 1: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            printf("\t%d",x[i][j]);
        }
        printf("\n");
        
    }
    printf("\nMatrix 2: \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            printf("\t%d",y[i][j]);
        }
        printf("\n");
        
    }
    printf("\nMatrix 3: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            printf("\t%d",z[i][j]);
        }
        printf("\n");
        
    }
    if (symmetric(z))
        printf("\nMatrix C is symmetric.");
    else
        printf("\nMatrix C is not symmetric.\n");




    return 0;
}
bool symmetric(int z[4][4])
{
   
   
    int x[4][4]={0};
    for( int i = 0; i < 4; i++){
        for( int j = 0; j < 4; j++){
            x[i][j] = z[i][j];
        }
    }
            if(z == x)
                return true;
              else
              return false;


}