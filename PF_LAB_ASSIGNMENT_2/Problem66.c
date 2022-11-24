#include <stdio.h>
#include <math.h>
int main()
{
    int xo=0, yo=0, xi, yi, num_steps=0, dist_step=0, tot_dist=0, avg_dist;
    dist_step=sqrt((xi-xo)*(xi-xo)+(yi-yo)*(yi-yo));
for(int i=1; i<100; ++i)
{
  printf("Enter X and Y coordinates for new distance (same coordinates to stop)\n");
  scanf("%d %d", &xi, &yi);
 if(xi!=xo || yi!=yo)
  {
    dist_step=sqrt((xi-xo)*(xi-xo)+(yi-yo)*(yi-yo));
    tot_dist+=dist_step;
    num_steps++;
    xo=xi;
    yo=yi;

  }
  else
  break;
}
avg_dist=tot_dist/num_steps;
printf("Total Distance Travelled : %d\n", tot_dist);
printf("Total Number of Steps Taken: %d\n", num_steps);
printf("Average Distance Covered per Step: %d\n", avg_dist);
return 0;
}