#include<stdio.h>
int main()
{
    char a[5];
    printf("Enter 5 characters to find if there are any vowels in it");
    for (int i = 0; i < 5; i++)
    {
       scanf("\n%c",&a[i]);          
       printf("%c\n",a[i]);
    }
    return 0;
}
/*123  456
654   321 */
/* 
for (int i =3,j=6; i <= 3; i++,j--)
{
    int temp=arr[i]
    arr[i]=arr[j];
    arr[j]=temp;
} */
