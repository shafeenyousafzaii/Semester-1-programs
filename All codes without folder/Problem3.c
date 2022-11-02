#include <stdio.h>

int calculate(int total_classes_attended, int total_classes);
int main() {

	int total_classes, total_classes_attended,x;

	printf("\nEnter total number of classes scheduled by instructor during the whole semester:");
	scanf("%d", &total_classes);

    printf("\ntotal number of classes he/she attended during the whole semester:");
	scanf("%d", &total_classes_attended);

	x = calculate(total_classes_attended, total_classes);

	printf(" \ntotal classes scheduled:%d\n", total_classes);
	printf(" \ntotal classes attended:%d\n", total_classes_attended);
	printf("\nYour attendance is:%d\n", x);





	return 0;
}


int calculate(int classes_attended, int total_classes)
{
	int x;

	x = (100 * classes_attended) / total_classes;

	if (x >= 80) {
		printf("\nYou are allowed to sit in the exam.\n");
	}

	else if (x < 80) {
		printf("\nYou are not allowed to sit in the exam.\n");
	}

	return x;

}