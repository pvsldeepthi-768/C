#include<stdio.h>
int main(){
  int l,n,rev=0,t;
  printf("Enter a number:");
  scanf("%d",&n);
  t=n;
  while(n!=0){
  rev=rev*10+n%10;
  n/=10;
  }
  printf("Reverse of %d is %d",t,rev);
  return 0;
}
/*output
Enter a number:3453
Reverse of 3453 is 3543
*/
