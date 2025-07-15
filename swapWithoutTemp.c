#include <stdio.h>
int main(){
  int a,b;
  printf("Enter a value:");
  scanf("%d",&a);
  printf("Enter b value:");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping:\n");
  printf("a:%d and b:%d",a,b);
  return 0; 
}
/* output
Enter a value:3
Enter b value:4
After swapping:
a:4 and b:3
*/
