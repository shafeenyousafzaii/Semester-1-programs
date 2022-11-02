#include<stdio.h>
int vowel(char c);
int main()
{
	char c,b;
	printf("enter the character");
	scanf("%d",&c);
	b=vowel(c);
	return 0;
	
}
int vowel(char c)
{

	if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u')
	{
		printf("%c is vowel",c);
	}
	else
	{
		printf("%c is consonant",c);
	}
	
}