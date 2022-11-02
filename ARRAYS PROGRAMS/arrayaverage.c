#include<stdio.h>
int main()
{
    float sum=0.0;int avg=0,x,subjects_marks[5],num_of_subj=0;
    printf("Enter your number of subjects");
    scanf("%d",&x);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of 5 subjects");
        scanf("%d",subjects_marks[i]);
    }
     sum=subjects_marks[0]+subjects_marks[1]+subjects_marks[2]+subjects_marks[3]+subjects_marks[4];
     avg=sum/5;
     printf("Average of your subject marks is : %d",avg);
     return 0;
     
    
}