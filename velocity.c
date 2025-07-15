#include<stdio.h>
int main()
{
  float distance,Time,speed;
  printf("Enter distance(kms):");
  scanf("%f",&distance);
  printf("Enter time(hours):");
  scanf("%f",&Time);
  speed=distance/Time;
  printf("Speed:%.2f KMPH",speed);
  return 0;
}
/*output
Enter distance(kms):30
Enter time(hours):2
Speed:15.00 KMPH
*/
