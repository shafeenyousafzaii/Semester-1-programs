#include <stdio.h>

int Attendance(int Classes,int T_classes)
{
	int z;

	z = (100*Classes )/T_classes;

	if (z>=80)
     {
		printf("Allowed for exams \n");
	}

	else if (z<80) 
    {
		printf("not allowed in the exam.\n");
	}

	return z;

}
int main() 
{

	int T_classes, Classes,z;

	printf("\nEnter total  classes");
	scanf("%d", &T_classes);

    printf("\ntotal number of classes you attended");
	scanf("%d", &Classes);

	z=Attendance(Classes, T_classes);

	printf(" \ntotal classes : \n : %d", T_classes);
	printf(" \n classes attended:\n : %d", Classes);
	printf("\nYour attendance :\n : %d", z);





	return 0;
}

