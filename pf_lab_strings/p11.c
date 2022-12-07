#include<stdio.h>
#include <string.h>

int Palindrome(char* name)
{
    int i = 0;
    int k = strlen(name) - 1;

    while (k > i) {
        if (name[i++] != name[k--]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[100];
    

    printf("Enter a string: ");
    scanf_s("%s", name);

    if (Palindrome(name)) {
        printf("%s is a palindrome.", name);
    }
    else {
        printf("%s is not a palindrome.", name);
    }

    return 0;
}