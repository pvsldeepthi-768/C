#include<stdio.h>
int main(){
  int n,i,fact=1;
  printf("Enter the number:");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
    fact*=i;
  printf("Factorial of %d is %d",n,fact);
  return 0;
}
/*output
Enter the number:5
Factorial of 5 is 120
*/
