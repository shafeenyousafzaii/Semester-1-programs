        #include<stdio.h>
        #include<string.h>
        int palindrome(char x[]);
        int main()
        {
            char x[10];
            fgets(x,sizeof(x),stdin);
            palindrome(x);
            
            return 0;
        }
        int palindrome(char x[])
        {
            for (int i = 0; i < strlen(x)/2; i++)
            {
                char temp[10];
                temp[i]=x[i];
                x[i]=x[i-strlen(x)-1];
                x[i-strlen(x)-1]=temp[10];
            }
            if (strcmp(x,x)==0)
            {
                printf("Palindrome.");
            }
            else
            {
                printf("Not");
            }
            
            
        }