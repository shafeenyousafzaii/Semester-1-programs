#include<stdio.h>
int main()
{
    int x[10]={2,4,6,8,1,3,5,7,10,13},max=x[0],min=x[0],sum=0,count=0,avg=0,last_element,second_index,count_even=0, count_odd=0,odd_sum=0;
    printf("Enter any 10 digits to find \nthe maximum value , \n minimum value , \n sum of array \n average of array \n last element of array \n value at index 2\n numbers in reverse order \n count even and odd in array \n sum of odd indices elements : \n");
    printf("\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     // scanf("%d",&x[i]);
    //     // printf("%d",x[i]);
    // }
    for(int j=0; j<10; j++)
    {

    //  printf("last element = %d ",x[9])
        count++;
        if (x[j]>max)
        {
            max=x[j];
            
        }
        if (x[j]<min)
        {
            min=x[j];
        }
        
            sum=sum+x[j];
        
        
        if (x[j]%2==0)
        {
            count_even++;
        }
        
        if (x[j]%2!=0)
        {
            count_odd++;
            odd_sum+=x[j];
        }
        

    }
    avg=(float)sum/10;
    printf("Maxiumum value is %d\n",max);
    printf("Minimum value is %d\n",min);
    printf("sum of array is %d\n",sum);
    printf("average value is %d\n",avg);
    printf("\nLast element of array = %d",x[9]);
    printf("\nindex 2 element of array = %d",x[2]);
    printf("\nReverse order = ");
        for ( int j = 9; j >=0; j--)
        {
            printf("\n%d",x[j]);
        }
    printf("\nEven numbers = %d",count_even);
    printf("\nOdd numbers = %d",count_odd);
    printf("\nSum of odd numbers = %d",odd_sum);
    // printf("Your maximum value is %d and minimum value is %d ",max,min);
   
    
    return 0;
}