#include<stdio.h>
// findduplicates();
// unionarrays();
int main()
{
    int x[8]={1,2,3,4,5,6,3,2},y[4]={1,3,5,7},z[10]={0};
    // unionarrays();
    // findduplicates();
    int count=0;
    for (int i = 0;i<8; i++)
   {
     for (int j = 0; j < 4; j++)
     {
        if (x[i]==y[j])
        {
            z[i]=x[i];
            count++;
        }
        
     }
     
     
     
   }
   for (int i = 0; i < count; i++)
   {
      printf("%d\t",z[i]);
   }
   for (int i = 0; i < 8; i++)
     {
        for (int j = 0; j < 4; j++)
        {
            if (x[i]==x[j])
            {
                z[i]=x[i];
            }
            
        }
        
     }
     printf("\n");
     for (int i = 0; i < count; i++)
   {
      printf("%d\t",z[i]);
   }
     

}
// int findduplicates()
// {
//    printf("Press enter to find any duplicates in the above array :");
//    printf("\n");
// }
// int unionarrays()
// {
//    printf("Press Enter to find the union of two arrays :");
//    printf("\n");
//    for (int i = 0;i<8; i++)
//    {
//      for (int j = 0; j < 4; j++)
//      {
//         if (x[i]==x[j])
//         {
//             z[i]=x[i];
//         }
        
//      }
     
//    }
//    for (int i = 0; i < 10; i++)
//    {
//       printf("x{%d,");
//    }
//    printf("}");

   
// }