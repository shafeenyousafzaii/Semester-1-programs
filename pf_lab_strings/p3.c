#include<stdio.h>
#include<string.h>
void encrypt(char []);
void decrypt(char []);
int main()
{
    char str[50];
    int input=0;
    printf("Enter string to decrypt it or encrypt it : \t \n");
    fgets(str,sizeof(str),stdin);
    printf("\n1. Encryption\n");
    printf("2. Decryption\n");
    printf("3. Exit\n"); 
    printf("\nEnter any one them to apply that task:");
    scanf("%d",&input);

    do
    {
        printf("\n1 for Encryption\n");
        printf("2 for Decryption\n");
        printf("3 to Exit\n");
        
        printf("\nEnter any one:");
        scanf("%d",&input);

        switch (input)
        {
        case 1:
            encrypt(str);
            break;

        case 2:
            decrypt(str);
            break;

        case 3:
            break;

        default:
            break;
        }

    } while (input!=3);
    
    return 0;
}

void encrypt(char a[])
{
    int size=strlen(a);

    for (int i = 0 ; i < size ; i++)
    {
        a[i]+=3;
    }
    
    printf("%s -- decrypted version.",a);

}

void decrypt(char a[])
{
    int size=strlen(a);

    for (int i = 0 ; i < size ; i++)
    {
        a[i]-=3;
    }
    
    printf("%s -- encrypted version.",a);

}
