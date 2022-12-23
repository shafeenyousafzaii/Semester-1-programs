#include<stdio.h>
int main()
{
    char input_ticket;
    int input_row,choose;
    char input_seat,input_terminate;
    int row=13; 
    char x[13][6]=
    {
   /*row 1*/  {'*','*','X','*','X','X'},
   /*row 2*/  {'*','X','*','X','*','X'},
   /*row 3*/  {'*','*','X','X','*','X'},
   /*row 4*/  {'X','*','X','*','X','X'},
   /*row 5*/  {'*','X','*','X','*','X'},
   /*row 6*/  {'*','X','*','X','*','X'},
   /*row 7*/  {'*','X','*','X','*','X'},
   /*row 8*/  {'*','X','*','X','*','X'},
   /*row 9*/  {'*','X','*','X','*','X'},
   /*row 10*/ {'*','X','*','X','*','X'},
   /*row 11*/ {'*','X','*','X','*','X'},
   /*row 12*/ {'*','X','*','X','*','X'},
   /*row 13*/ {'*','X','*','X','*','X'},
    }
    ;
    printf("Choose from the following : \n");
    do
    {
        for (int i = 0; i < 13; i++)
        {
            printf("ROW : %d",i);
            for (int j = 0; j < 6; j++)
            {
                printf(" \t%c",x[i][j]);
            }
            printf("\n");
            
        }
        printf("\n1: Ticket Type(First class (press F) , business class (press B),economy class(press E)\n2: Row number(1-13\n 3: Desired seat(A-F)\n4: Press Z if done\n");
        printf("\t \n 1: Ticket Type(First class (press F) , business class (press B),economy class(press E) \n ");
        // scanf("\n%d",choose);
        // if(choose=='4')
        scanf("\n%c",&input_ticket);
        
    
        
        if (input_ticket=='F')
        {
            printf("\nChoose rows from 1 - 2 only :");
        }
        else if (input_ticket=='B')
        {
            printf("\nChoose rows from 3 to 7 only :");
        }
        else if(input_ticket=='E')
        {
            printf("\nChoose rows from 3 to 7 only:");
        }
        
        
        printf("\t 2: Row number(1-13) \n");
        scanf("\n%d",&input_row);
        printf(" \t 3: Desired seat(A-F)\n");
        
        scanf("\n%c",&input_seat);

        printf("\t 4: Press Z if done.");
        
        scanf("%c",&input_terminate);
        // here the input row in x[][here] 
        if (input_ticket=='F')
        {
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; i < 6; i++)
                {
                    if (input_seat=='A')
                    {
                        x[input_row][0]='X';
                    }
                    else if (input_seat=='B')
                    {
                        x[input_row][1]='X';
                    }
                    else if (input_seat=='C')
                    {
                        x[input_row][2]='X';
                    }
                    else if (input_seat=='D')
                    {
                        x[input_row][3]='X';
                    }
                    else if (input_seat=='E')
                    {
                        x[input_row][4]='X';
                    }
                    else if (input_seat=='F')
                    {
                        x[input_row][5]='X';
                    }
                    x[i][j]='*';
                    // x[input_row][input_seat]='X';
                    // x[i][j]='*';
                }
                
            }
            
        }
        else if (input_ticket=='B')
        {
            for (int i = 3; i < 8 ; i++)
            {
                for (int j = 0; i < 6; i++)
                {
                    if (input_seat=='A')
                    {
                        x[input_row][0]='X';
                    }
                    else if (input_seat=='B')
                    {
                        x[input_row][1]='X';
                    }
                    else if (input_seat=='C')
                    {
                        x[input_row][2]='X';
                    }
                    else if (input_seat=='D')
                    {
                        x[input_row][3]='X';
                    }
                    else if (input_seat=='E')
                    {
                        x[input_row][4]='X';
                    }
                    else if (input_seat=='F')
                    {
                        x[input_row][5]='X';
                    }
                    x[i][j]='*';
                    // x[input_row][input_seat]='X';
                    // x[i][j]='*';
                }
                
            }
        }
        else if (input_ticket=='E')
        {
           for (int i = 8; i < 13; i++)
            {
                for (int j = 0; i < 6; i++)
                {
                    if (input_seat=='A')
                    {
                        x[input_row][0]='X';
                    }
                    else if (input_seat=='B')
                    {
                        x[input_row][1]='X';
                    }
                    else if (input_seat=='C')
                    {
                        x[input_row][2]='X';
                    }
                    else if (input_seat=='D')
                    {
                        x[input_row][3]='X';
                    }
                    else if (input_seat=='E')
                    {
                        x[input_row][4]='X';
                    }
                    else if (input_seat=='F')
                    {
                        x[input_row][5]='X';
                    }
                    x[i][j]='*';
                    // x[input_row][input_seat]='X';
                    // x[i][j]='*';
                }
                
            }
        }
        
        
    } while (input_terminate!='Z');
    printf("\nYou pressed Z and the program has been terminated:");
    return 0;
}
