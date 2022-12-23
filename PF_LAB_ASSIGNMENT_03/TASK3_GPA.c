#include<stdio.h>
#include<string.h>
void calculate_GPA();
int main()
{
    float Points[11]={4.0,3.67,3.33,3.0,2.67,2.33,2.0,1.67,1.33,1.0,0};
    /*char  grade[17]={'A','A-','B+','B','B-','C+','C','C-','D+','D','F'};*/
    char  /*grade1[2]="A",grade2[2]="A-",grade3[2]="B+",grade4[2]="B",grade5[2]="B-",grade3[2]="C+"*/ grade[30] = "AA-B+BB-C+CC-D+DF";
    float GPA;
    int no_of_subjects;
    char grade_scored1[2],grade_scored2[2],grade_scored3[2],grade_scored4[2],grade_scored5[2],grade_scored6[2],grade_scored7[2],grade_scored8[2];
    printf("Enter number of subjects : ");
    scanf("%d",&no_of_subjects);
    float credit_hour1,credit_hour2,credit_hour3,credit_hour4,credit_hour5,credit_hour6,credit_hour7,credit_hour8;
    float PH1,PH2,PH3,PH4,PH5,PH6,PH7,PH8;
    for (int i = 1; i < no_of_subjects + 1; i++)
     { 
        if (i==1)
        {
        printf("Enter your grade in subject 1 : \n");
        scanf("%s",grade_scored1);

        if (strcmp(grade_scored1 , "A")== 0)
        {
            PH1=4.0;
        }
        else if ( strcmp(grade_scored1 , "A-") == 0 )
        {
          PH1=3.67;
        }
        else if ( strcmp(grade_scored1 , "B+") == 0 )
        {
          PH1=3.33;
        }
        else if ( strcmp(grade_scored1 , "B") == 0 )
        {
          PH1=3.0;
        }
        else if ( strcmp(grade_scored1 , "B-") == 0 )
        {
          PH1=2.67;
        }
        else if ( strcmp(grade_scored1 , "C+") == 0)
        {
          PH1=2.33;
        }
        else if ( strcmp(grade_scored1 , "C") == 0 )
        {
          PH1=2.0;
        }
        else if ( strcmp(grade_scored1 , "C-") == 0 )
        {
          PH1=1.67;
        }
        else if ( strcmp(grade_scored1 , "D+") == 0 )
        {
          PH1=1.33;
        }
        else if ( strcmp(grade_scored1 , "D") == 0 )
        {
          PH1=1.0;
        }
        else if ( strcmp(grade_scored1 , "F") == 0 )
        {
          PH1=0;
        }
        
        printf("Enter your credit hour of subject 1 : ");

        scanf("%f",&credit_hour1);

        }   
        else if (i==2)
        {
        printf("Enter your grade in subject 2 : ");
        scanf("%s",grade_scored2);
        if (strcmp(grade_scored2 , "A" )== 0)
        {
            PH2=4.0;
        }
        else if ( strcmp(grade_scored2 , "A-") == 0 )
        {
          PH2=3.67;
        }
        else if ( strcmp(grade_scored2 , "B+") == 0 )
        {
          PH2=3.33;
        }
        else if ( strcmp(grade_scored2 , "B") == 0 )
        {
          PH2=3.0;
        }
        else if ( strcmp(grade_scored2 , "B-") == 0 )
        {
          PH2=2.67;
        }
        else if ( strcmp(grade_scored2 , "C+") == 0)
        {
          PH2=2.33;
        }
        else if ( strcmp(grade_scored2 , "C") == 0 )
        {
          PH2=2.0;
        }
        else if ( strcmp(grade_scored2 , "C-") == 0 )
        {
          PH2=1.67;
        }
        else if ( strcmp(grade_scored2 , "D+") == 0 )
        {
          PH2=1.33;
        }
        else if ( strcmp(grade_scored2 , "D") == 0 )
        {
          PH2=1.0;
        }
        else if ( strcmp(grade_scored2 , "F") == 0 )
        {
          PH2=0;
        }
        
        printf("Enter your credit hour of subject 2 : ");
        scanf("%f",&credit_hour2);
        }
        else if (i==3)
        {
        printf("Enter your grade in subject 3 : ");
        
        scanf("%s",grade_scored3);

        if (strcmp(grade_scored3 , "A") == 0)
        {
            PH3=4.0;
        }
        else if ( strcmp(grade_scored3 , "A-") == 0 )
        {
          PH3=3.67;
        }
        else if ( strcmp(grade_scored3 , "B+") == 0 )
        {
          PH3=3.33;
        }
        else if ( strcmp(grade_scored3 , "B") == 0 )
        {
          PH3=3.0;
        }
        else if ( strcmp(grade_scored3 , "B-") == 0 )
        {
          PH3=2.67;
        }
        else if ( strcmp(grade_scored3 , "C+") == 0)
        {
          PH3=2.33;
        }
        else if ( strcmp(grade_scored3 , "C") == 0 )
        {
          PH3=2.0;
        }
        else if ( strcmp(grade_scored3 , "C-") == 0 )
        {
          PH3=1.67;
        }
        else if ( strcmp(grade_scored3 , "D+") == 0 )
        {
          PH3=1.33;
        }
        else if ( strcmp(grade_scored3 , "D") == 0 )
        {
          PH3=1.0;
        }
        else if ( strcmp(grade_scored3 , "F") == 0 )
        {
          PH3=0;
        }
        
        printf("Enter your credit hour of subject 3 : ");
        
        scanf("%f",&credit_hour3);

        }
        else if (i==4)
        {
        printf("Enter your grade in subject 4 : ");
        
        scanf("%s",grade_scored4);
        if (strcmp(grade_scored4 , "A") == 0)
        {
            PH4=4.0;
        }
        else if ( strcmp(grade_scored4 , "A-") == 0 )
        {
          PH4=3.67;
        }
        else if ( strcmp(grade_scored4 , "B+") == 0 )
        {
          PH4=3.33;
        }
        else if ( strcmp(grade_scored4 , "B") == 0 )
        {
          PH4=3.0;
        }
        else if ( strcmp(grade_scored4 , "B-") == 0 )
        {
          PH4=2.67;
        }
        else if ( strcmp(grade_scored4 , "C+") == 0)
        {
          PH4=2.33;
        }
        else if ( strcmp(grade_scored4 , "C") == 0 )
        {
          PH4=2.0;
        }
        else if ( strcmp(grade_scored4 , "C-") == 0 )
        {
          PH4=1.67;
        }
        else if ( strcmp(grade_scored4 , "D+") == 0 )
        {
          PH4=1.33;
        }
        else if ( strcmp(grade_scored4 , "D") == 0 )
        {
          PH4=1.0;
        }
        else if ( strcmp(grade_scored4 , "F") == 0 )
        {
          PH4=0;
        }
        printf("Enter your credit hour of subject 4 : ");
        
        scanf("%f",&credit_hour4);

        }
        else if (i==5)
        {
        printf("Enter your grade in subject 5 : ");
        
        scanf("%s",grade_scored5);

        if (strcmp(grade_scored5 , "A") == 0)
        {
            PH5=4.0;
        }
        else if ( strcmp(grade_scored5 , "A-") == 0 )
        {
          PH5=3.67;
        }
        else if ( strcmp(grade_scored5 , "B+") == 0 )
        {
          PH5=3.33;
        }
        else if ( strcmp(grade_scored5 , "B") == 0 )
        {
          PH5=3.0;
        }
        else if ( strcmp(grade_scored5 , "B-") == 0 )
        {
          PH5=2.67;
        }
        else if ( strcmp(grade_scored5 , "C+") == 0)
        {
          PH5=2.33;
        }
        else if ( strcmp(grade_scored5 , "C") == 0 )
        {
          PH5=2.0;
        }
        else if ( strcmp(grade_scored5 , "C-") == 0 )
        {
          PH5=1.67;
        }
        else if ( strcmp(grade_scored5 , "D+") == 0 )
        {
          PH5=1.33;
        }
        else if ( strcmp(grade_scored5 , "D") == 0 )
        {
          PH5=1.0;
        }
        else if ( strcmp(grade_scored5 , "D") == 0 )
        {
          PH5=0;
        }


        printf("Enter your credit hour of subject 5 : ");
        
        scanf("%f",&credit_hour5);
        
        }

        else if (i==6)
        {
        printf("Enter your grade in subject 6 : ");
        
        scanf("%s",grade_scored6);

        if (strcmp(grade_scored6 , "A") == 0)
        {
            PH6=4.0;
        }
        else if ( strcmp(grade_scored6 , "A-") == 0 )
        {
          PH6=3.67;
        }
        else if ( strcmp(grade_scored6 , "B+") == 0 )
        {
          PH6=3.33;
        }
        else if ( strcmp(grade_scored6 , "B") == 0 )
        {
          PH6=3.0;
        }
        else if ( strcmp(grade_scored6 , "B-") == 0 )
        {
          PH6=2.67;
        }
        else if ( strcmp(grade_scored6 , "C+") == 0)
        {
          PH6=2.33;
        }
        else if ( strcmp(grade_scored6 , "C") == 0 )
        {
          PH6=2.0;
        }
        else if ( strcmp(grade_scored6 , "C-") == 0 )
        {
          PH6=1.67;
        }
        else if ( strcmp(grade_scored6 , "D+") == 0 )
        {
          PH6=1.33;
        }
        else if ( strcmp(grade_scored6 , "D") == 0 )
        {
          PH6=1.0;
        }
        else if ( strcmp(grade_scored6 , "F") == 0 )
        {
          PH6=0;
        }
        printf("Enter your credit hour of subject 6 : ");
        
        scanf("%f",&credit_hour6);
        
        }
        else if (i==7)
        {
        printf("Enter your grade in subject 7 : ");
        
        scanf("%s",grade_scored7);

        if (strcmp(grade_scored7 , "A") == 0)
        {
            PH7=4.0;
        }
        else if ( strcmp(grade_scored7 , "A-") == 0 )
        {
          PH7=3.67;
        }
        else if ( strcmp(grade_scored7 , "B+") == 0 )
        {
          PH7=3.33;
        }
        else if ( strcmp(grade_scored7 , "B") == 0 )
        {
          PH7=3.0;
        }
        else if ( strcmp(grade_scored7 , "B-") == 0 )
        {
          PH7=2.67;
        }
        else if ( strcmp(grade_scored7 , "C+") == 0)
        {
          PH7=2.33;
        }
        else if ( strcmp(grade_scored7 , "C") == 0 )
        {
          PH7=2.0;
        }
        else if ( strcmp(grade_scored7 , "C-") == 0 )
        {
          PH7=1.67;
        }
        else if ( strcmp(grade_scored7 , "D+") == 0 )
        {
          PH7=1.33;
        }
        else if ( strcmp(grade_scored7 , "D") == 0 )
        {
          PH7=1.0;
        }
        else if ( strcmp(grade_scored7 , "F") == 0 )
        {
          PH7=0;
        }
        printf("Enter your credit hour of subject 7 : ");
        
        scanf("%f",&credit_hour7);
        
        }
        else if (i==8)
        {
        printf("Enter your grade in subject 8 : ");
        
        scanf("%s",grade_scored8);

        if (strcmp(grade_scored8 , "A" )== 0)
        {
            PH8=4.0;
        }
        else if ( strcmp(grade_scored8 , "A-") == 0 )
        {
          PH8=3.67;
        }
        else if ( strcmp(grade_scored8 ,  "B+") == 0 )
        {
          PH8=3.33;
        }
        else if ( strcmp(grade_scored8 , "B") == 0 )
        {
          PH8=3.0;
        }
        else if ( strcmp(grade_scored8 , "B-") == 0 )
        {
          PH8=2.67;
        }
        else if ( strcmp(grade_scored8 , "C+") == 0)
        {
          PH8=2.33;
        }
        else if ( strcmp(grade_scored8 , "C") == 0 )
        {
          PH8=2.0;
        }
        else if ( strcmp(grade_scored8 , "C-") == 0)
        {  
          PH8=1.67;
        }
        else if ( strcmp(grade_scored8 , "D+") == 0 )
        {
          PH8=1.33;
        }
        else if ( strcmp(grade_scored8 , "D") == 0 )
        {
          PH8=1.0;
        }
        else if ( strcmp(grade_scored8 , "F") == 0 )
        {
          PH8=0;
        }
        printf("Enter your credit hour of subject 8 : ");
        
        scanf("%f",&credit_hour8);
        }
     
     }
    
        
    
        for (int j = 0; j < no_of_subjects; j++)
        {
           if ( no_of_subjects ==2 )
           {
             GPA=((PH1*credit_hour1) + (PH2 * credit_hour2)/(credit_hour1+credit_hour2));
             printf("%lf is your GPA : \n ",GPA);
           }
           else if ( no_of_subjects==3)
           {
            GPA=((PH1*credit_hour1) + (PH2 * credit_hour2) + (PH3 * credit_hour3)/(credit_hour1+credit_hour2+credit_hour3));
            printf("%lf is your GPA : \n ",GPA);
           }
           else if ( no_of_subjects==4)
           {
            GPA=((PH1*credit_hour1) + (PH2 * credit_hour2) + (PH3 * credit_hour3) + (PH4 * credit_hour4)/(credit_hour1+credit_hour2+credit_hour3+credit_hour4));
            printf("%lf is your GPA : \n ",GPA);
           }
           else if ( no_of_subjects==5 )
           {
            GPA=((PH1*credit_hour1) + (PH2 * credit_hour2) + (PH3 * credit_hour3) + (PH4 * credit_hour4) + (PH5 * credit_hour5)/(credit_hour1+credit_hour2+credit_hour3+credit_hour4+credit_hour5));
            printf("%lf is your GPA : \n ",GPA);
           }
           else if ( no_of_subjects==6 )
           {
            GPA=((PH1*credit_hour1) + (PH2 * credit_hour2) + (PH3 * credit_hour3) + (PH4 * credit_hour4) + (PH5 * credit_hour5) +(PH6 * credit_hour6)/(credit_hour1+credit_hour2+credit_hour3+credit_hour4+credit_hour5+credit_hour6));
            printf("%lf is your GPA : \n ",GPA);
           }
           else if (no_of_subjects==7)
           {
            GPA=((PH1*credit_hour1) + (PH2 * credit_hour2) + (PH3 * credit_hour3) + (PH4 * credit_hour4) + (PH5 * credit_hour5) +(PH6 * credit_hour6)+(PH7 * credit_hour7)/(credit_hour1+credit_hour2+credit_hour3+credit_hour4+credit_hour5+credit_hour6+credit_hour7));
            printf("%lf is your GPA : \n ",GPA);
           }
           else if (no_of_subjects==8)
           {
            GPA=((PH1*credit_hour1) + (PH2 * credit_hour2) + (PH3 * credit_hour3) + (PH4 * credit_hour4) + (PH5 * credit_hour5) +(PH6 * credit_hour6)+(PH7 * credit_hour7)+(PH8 * credit_hour8)/(credit_hour1+credit_hour2+credit_hour3+credit_hour4+credit_hour5+credit_hour6+credit_hour7+credit_hour8));
            printf("%lf is your GPA : \n ",GPA);
           }
           
                  
        

        }
} 


// void calculate_GPA()
// {
//         int gpa;
        
// }