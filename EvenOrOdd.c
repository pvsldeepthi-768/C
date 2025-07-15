#include<stdio.h>
int main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);  
  switch(n%2){
case 0:
printf("Even Number");
break;
case 1:
printf("odd Number");
break;
  }
  return 0;
}
/*output

Enter a number:5
odd Number
  
Enter a number:68
Even Number
*/
