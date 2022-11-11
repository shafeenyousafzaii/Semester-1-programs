#include<stdio.h>
#include<math.h>
int main()
{
    float root1=0,root2=0; float z[3],disc; const int i=-1;
    for (int i = 0; i < 3; i++)
    {
        if(i==0)
        {
        printf("Enter value of A:\n");
        }
        if (i==1)
        {
            printf("Enter value of B :\n");
        }
        if (i==2)
        {
            printf("Enter value of C:\n");
        }
        
        scanf("%f",&z[i]);
        
    }
    if (z[0]==0 && z[1]==0 && z[2]==0)
    {
        printf("The values cant be zero");
    }
    
    else if (z[0]==0 && z[1]>0 && z[2]>0)
    {
        printf("The value cant be zero:");
    }
    else if (z[0]>0 && z[1]==0 && z[2]>0)
    {
        printf("The value cant be zero:");
    }
    else if (z[0]>0 && z[1]>0 && z[2]==0)
    {
        printf("The value cant be zero:");
    }
    else if (z[0]<0 || z[1]<0 || z[2]<0)
    {
        printf("Values must be greater than zero");
    }
    // else if (z[0]==0 && z[1]!=0 && z[2]==0)
    // {
    //     printf("Values must be greater than zero");
    // }
    // else if (z[0]==0 && z[1]==0 && z[2]!=0)
    // {
    //     printf("Values must be greater than zero");
    // }
    disc=(z[1])*(z[1])-(4)*(z[0])*(z[2]);
    if (disc>0)
    {
        //    If disc. is greater than zero then roots are real and unequal.
        //    root1=(-b+(dics) 1/2 /2*a).
        //    root2=(-b-(dics) 1/2 /2*a).   
        root1=((-z[1]+(sqrt(disc))/(2*z[0])));
        root2=((-z[1]-(sqrt(disc))/(2*z[0])));    
        printf("Roots are real: %.2lf for positive %.2lf for negative",root1,root2);
    }
    else if (disc<0)
    {
        // If disc. is less than zero then roots are imaginary.
        // root1=(-b+i(dics) 1/2 /2*a).
        // root2=(-b-i(dics) 1/2 /2*a).
       root1=((-z[1]/(2*z[0])));
       root2=((-z[1]*(sqrt(disc))/(2*z[0])));
       printf("Roots are imaginary : %.2lf for positive %.2lf for negative",root1,root2);
    }
    if (disc==0)
    {
        // root1=root2= -b/(2*a).
        root1=root2=-z[1]/(2*z[0]);
        printf("Roots are real %.2lf",root1);
    }
    
    
    
    
    
    return 0;
    
    
    
  
}