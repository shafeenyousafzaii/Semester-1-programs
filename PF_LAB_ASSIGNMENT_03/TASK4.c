#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20];
    do
    {
      printf("Choose your menu : \n");
      
      printf("1 : Espresso & Mocha chillers  \n 2: Over Ice \n 3: Chocolate chillers \n 4: Fusion \n : ");
      
      fgets(input , sizeof(input),stdin);
      
      if( strcmp(input , "Espresso" || "Mocha chillers") == 0 )
      {
        printf("\n1 : Very Vanilla Chiller , \t361 - small , 409 - regular \n2: cocoa loco cookies N'Cream , \t361 - small , 409 - regular \n3: Hazelnut Mocha Chiller \nChocolate Macabana Chiller \nItalian Dolice chiller \nCaramel nut chiller \n4: Tiramsu chiller \t 399 - small , 509 regular \n Toffee Nut Chiller");

    } 
    }while (strcmp(input , "N" || "no" || "No") != 0 );
        
    return 0;
}

