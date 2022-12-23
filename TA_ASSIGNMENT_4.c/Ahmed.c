#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h> 
#define MAX 4

int matrix1[MAX][MAX], matrix2[MAX][MAX], matrix3[MAX][MAX]; 

void FillMatrix1() 
{ 
	int i, j; 
	
	srand(time(NULL)); 

	for (i = 0; i < MAX; i++) 
		for (j = 0; j < MAX; j++) 
			matrix1[i][j] = rand() % 20; 
} 

void FillMatrix2() 
{ 
	int i; 
	
	for (i = 0; i < MAX; i++)
    { 
        for (int j = 0; j < MAX; i++)
        { 
            if (i==j)
            {
                 matrix2[i][j] = matrix1[i][j];
            }
            
           
        }
        
		 
    }


} 

void FillMatrix3() 
{ 
	int i, j; 

	for (i = 0; i < MAX; i++) 
	{ 
		for (j = 0; j < MAX; j++) 
		{ 
			if (i == j)
            { 
				matrix3[i][j] = matrix2[i][j]; 
            }
            else if (i + j == MAX - 1) 
			{	
                matrix3[i][j] = matrix2[j][i]; 
            }
            else
            {
				matrix3[i][j] = matrix2[i][j]; 
		    } 
	} 
}
}
bool CheckSymmetric() 
{ 
	int i, j; 
	
	for (i = 0; i < MAX; i++) 
		for (j = 0; j < MAX; j++) 
			if (matrix3[i][j] != matrix3[j][i]) 
				return false; 
	
	return true; 
} 

void DisplayMatrix1() 
{ 
	int i, j; 
	
	printf("Matrix 1\n"); 
	for (i = 0; i < MAX; i++) 
	{ 
		for (j = 0; j < MAX; j++) 
			printf("%d ", matrix1[i][j]); 
		printf("\n"); 
	} 
	printf("\n"); 
} 

void DisplayMatrix2() 
{ 
	int i, j; 
	
	printf("Matrix 2\n"); 
	for (i = 0; i < MAX; i++) 
	{ 
		for (j = 0; j < MAX; j++) 
			printf("%d ", matrix2[i][j]); 
		printf("\n"); 
	} 
	printf("\n"); 
} 

void DisplayMatrix3() 
{ 
	int i, j; 
	
	printf("Matrix 3\n"); 
	for (i = 0; i < MAX; i++) 
	{ 
		for (j = 0; j < MAX; j++) 
			printf("%d ", matrix3[i][j]); 
		printf("\n"); 
	} 
	printf("\n"); 
} 

int main() 
{ 
	int symmetric; 

	FillMatrix1(); 
	DisplayMatrix1(); 

	FillMatrix2(); 
	DisplayMatrix2(); 

	FillMatrix3(); 
	DisplayMatrix3(); 

	symmetric = CheckSymmetric(); 
	if (symmetric == true) 
		printf("Matrix 3 is symmetric\n"); 
	else
		printf("Matrix 3 is not symmetric\n"); 

	return 0; 
}