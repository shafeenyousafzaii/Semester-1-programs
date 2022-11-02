#include <stdio.h>

int amount(int pages)//function declaration
{
	int  x,y ;
     //Checking if pages are less than 10 or greater than 10
	if (pages<=10)
     {
		x = ((pages*0.20 )+(3.00));

		
    }
     //when pages are greater than 10
	else if (pages>10) 
    {
		y=pages-10;
		x=((y*0.1)+(3.00)+(2));
	}
	return x; 
    //return value to function call

}


int main()
 {
	int  pages , due   ;
	printf("Enter number of pages \n"); //message to user
	scanf("%d", &pages); //input to comp
	due = amount(pages);//function call
	printf("Amount due %d \n", due);//output

	

}