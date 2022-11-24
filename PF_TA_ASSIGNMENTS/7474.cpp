int openLocks(int number_of_lockers ,int number_of_students )
{
   int open=0,closed=0,first_student=1,second_studetn=2,third_student=3,fourth_student=4,student;
     for(int students=1;students<=number_of_lockers;students++) 
     {
     int student=0;
     //fisrt we check number of lockers to be opened
     for(int locker=1;locker < number_of_students;locker++)
     {
    
        if (students%locker==0)
        {
            student++;
        }
        
     }
     if (student%2==1)
     {
        closed++;
     }
     
     }
     
     return closed;
   
}
//    while (students<=number_of_lockers)
//    {
//      int student=0;
//      for (int locker = 0; locker < number_of_students; locker++)
//      {
//         if (student%locker==0)
//         {
//             student++;
//         }
        
//      }
//      if (student%2==1)
//      {
//         closed++;
//      }
     
     
//      students++;
//      return closed;
//    }
   
   
//    for (int i = 0; i <i-1; i++)
//    {
//      if (number_of_lockers%second_studetn==0)
//      {
//           closed++;
//      }
     
//    }
   
//    while ( number_of_lockers <-1 && number_of_students<-1)
//    {
//        number_of_lockers++;
//     //  number_of_students++;
//     //  for (open ;; open++)
//     //  {
        
//     //  }
   

  

//     if (number_of_lockers%2==0)
//     {
//         closed++;
//     }
//     if (number_of_lockers%3==0)
//     {
//         closed++;
//     }
    
   
//    }
  

int mostTouchableLocker(int number_of_lockers , int number_of_students)
{
  int max=0,number,visit;

for(int i=1 ; i<= number_of_lockers ; i++) // lockers
{
    int visit=0;
    
    for(int j=1;j<=number_of_students;j++) //students
    {
        if(i%j==0)
        {
            visit++;
        }    
    }
    if (max<=visit)
    {
        max=visit;
        number=i;
    }
} 
return number;

}