#include<stdio.h>
int main(){
   int n,s;
   printf("Enter a number:");
   scanf("%d",&n);
   s=n*(n+1)/2;
   printf("Sum of %d numbers is %d",n,s);
  return 0;
}
/*output
Enter a number:10
Sum of 10 numbers is 55
*/
