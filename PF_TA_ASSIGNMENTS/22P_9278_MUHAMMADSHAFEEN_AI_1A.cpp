#include<iostream>

using namespace std;
int openLocks(int,int);
int mostTouchableLocker(int,int);

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

// Nothing below

void test1(int arr[][3] , int size)
{
    cout << "\n\nTask 1 Results\n\n";
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = openLocks(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
            cout << "Test Failed" << endl;
            cout << "Lockers = " << arr[i][0] << endl;
            cout << "Students= " << arr[i][1] << endl;
            cout << "Expected= " << arr[i][2] << endl;
            cout << "Result =  " << val;
            cout << "\n-------------------------------------";
            cout << "\n\n";
        }
    }
    cout << "\n\n";
    cout << "Total Passed: " << passed << endl;
    cout << "Total Failed: " << failed;
    cout << "\n\n";
    cout << "-----------------------------------------------------------------------------------------------------------------\n";
}

void test2(int arr[][3] , int size)
{
    cout << "\n\nTask 2 Results\n\n";
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = mostTouchableLocker(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
            cout << "Test Failed" << endl;
            cout << "Lockers = " << arr[i][0] << endl;
            cout << "Students= " << arr[i][1] << endl;
            cout << "Expected= " << arr[i][2] << endl;
            cout << "Result =  " << val;
            cout << "\n-------------------------------------";
            cout << "\n\n";
        }
    }
    cout << "\n\n";
    cout << "Total Passed: " << passed << endl;
    cout << "Total Failed: " << failed;
    cout << "\n\n";
    cout << "-----------------------------------------------------------------------------------------------------------------\n";
}

int main()
{
    int arr1[10][3] = {{10,10,3},
                      {100,100,10},
                      {100,72,34},
                      {70,100,8},
                      {10000,1000,5228},
                      {0,0,0},
                      {1,0,0},
                      {10000,10000,100},
                      {10000,2000,5187},
                      {17000,2154,8989}};
    int arr2[10][3] = {{10,10,10},
                      {20,10,20},
                      {72,100,72},
                      {100,70,60},
                      {150,40,120},
                      {15,7,12},
                      {1500,450,1260},
                      {100,100,96},
                      {17000,2154,15120},
                      {10000,10000,9240}};
    test1(arr1,10);
    test2(arr2,10);
    return 0;
}