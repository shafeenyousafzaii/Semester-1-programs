#include<stdio.h>
void display (char seats[13][6])
{ 
printf("\t A\tB\tC\tD\tE\tF \n");
for(int i=0;i<13;i++)
   {
     printf("Row %d)\t",i+1);
    for(int j=0;j<6;j++)
      {
        printf("%c\t",seats[i][j]);
      }
    printf("\n");
   }  
}
int main(){
    char seats[13][6];
 int    rows=13;
    int col=6;
 for(int i=0;i<13;i++)
   {
    for(int j=0;j<6;j++)
      {
        seats[i][j]='*';
      }
   } 
   display(seats);
while(1)
{ 
char input;int seat; char col; int row;
printf("1. Ticket(First CLass(F),Business Class(B),economy class(E) \n");
scanf("\n%c",&input);
if(input=='B')
{ printf("Enter Row number(1to2)\n");
  scanf("%d",&row);
  printf("Enter seat number(1to6)\n");
  scanf("%d",&seat);
  seats[row-1][seat-1]='X';
  display(seats);
}
else if(input=='F')
{ printf("Enter Row number(3to7)\n");
  scanf("%d",&row);
  printf("Enter seat number(1to6)\n");
  scanf("%d",&seat);
  if(seats[row-1][seat-1]!='X')
    { 
        seats[row-1][seat-1]='X';
    }
    else
    {
        printf("Seat is occupied\n");
        continue;
    }
  display(seats);
}
else if(input=='E')
{ printf("Enter Row number(7to12)\n");
  scanf("%d",&row);
  printf("Enter seat number(1to6)\n");
  scanf("%d",&seat);
  if(seats[row-1][seat-1]!='X')
    { 
        seats[row-1][seat-1]='X';
    }
    else
    {
        printf("Seat is occupied\n");
        continue;
    }
    display(seats);
}
else 
break;
}
return 0;
}