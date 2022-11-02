#include <stdio.h>
int main() {
    int i, j, rows;
    char c;
    printf("Enter any symbol : *,^,@,- etc : ");
    scanf("%c", &c);
    printf("Enter column: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c", c);
        }
        printf("\n");
    }
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%c", c);
        }
        printf("\n");
    }
 return 0;
}