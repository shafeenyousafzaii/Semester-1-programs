#include<stdio.h>
int main()
{
    int add,ROW,COLUMN;int lin,lout;
    int b;
    float mat[4][4],matrix_3[4][4];
    int n=4;
       for(int i = 0 ; i < n ; i++)
       {
            for(int j = 0 ; j < n ; j++)
            {
        add=0;
        ROW=i-1;
        for(int x=0;x<3;x++)
        {
				if(ROW<0)
                {
					ROW=n-1;
				}
				if(ROW>=n)
                {
            		ROW=0;
            	}
				COLUMN=j-1;
				for(int y=0;y<3;y++)
                {
            		if(COLUMN>=n)
                    {
                		COLUMN=0;
                	}
					if(COLUMN<0)
                    {
						COLUMN=n-1;
					}
					
            		add+=mat[ROW][COLUMN];
            		
            		printf("[%d%d]=[%d] \n[%.2f]\n",ROW,COLUMN,mat[ROW][COLUMN],add);
            		COLUMN++;
				}
                
				printf("end COLUMN loop %d\n\n",++lin);
				ROW++;
			}
				printf("end ROW loop %d\n\n",++lout);
        
            add-=mat[i][j];
            matrix_3[i][j]=add/mat[i][j];
    
        
    
  printf("[%d][%d]	add: %.2f and b:%.2f  \n",i,j,add,b);
    }
}
    return 0;
}
