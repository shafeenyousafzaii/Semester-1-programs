#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random();
int main()
{
    int x[11]={0,0,0,0,0,0,0,0,0,0,0},d1,d2,sum=0;
     srand(time(NULL));
    
    // for (int i = 2; i < 12; i++)
    // {
      for(int j=0;j<1000;j++)
      {

       
        d1=(rand()%6)+1;
        d2=(rand()%6)+1;
    //   d1=random();
    //   d2=random();
      sum=d1+d2;
      if (sum==2)
      {
        x[0]++;
      }
      else if (sum==3)
      {
        x[1]++;
      }
      else if (sum==4)
      {
        x[2]++;
      }
      else if (sum==5)
      {
        x[3]++;
      }
      else if (sum==6)
      {
        x[4]++;
      }
      else if (sum==8)
      {
        x[6]++;
      }
      else if (sum==9)
      {
        x[7]++;
      }
      else if (sum==10)
      {
        x[8]++;
      }
      else if (sum==11)
      {
        x[9]++;
      }
      else if (sum==12)
      {
        x[10]++;
      }
     
    //   }
       
      /*
      
      printf("Number\tFrequency:\n");
      printf("%d \t %d\n",i,x[i]);
      */
      
      
      
         
    }
    for (int i = 0; i < 11; i++)
    {
      printf("Number\tFrequency:\n");
      printf("%d \t %d\n",i+2,x[i]);
    }
    
    
    











    /*
    int  x[6][6],r1,r2,y[12][1]={2,3,4,5,6,7,8,9,10,11,12},sum;
    
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            x[i][j]=r1+r2;
        }
        
    }

    for (int  i = 0; i < 6; i++)     
    {
        
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 1000; k++)
            {
                r1=random();
                r2=random();
                sum=r1+r2;
                x[i][j]=sum;
            }
            
        }
        
        y[12][1]
    }
   
 */   
}
int random()
{
    int random;
    srand(time(NULL));
    random=(rand()%6)+1;
    return random;
}