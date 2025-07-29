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

find even or odd without conditional statements
#include <stdio.h>

int main()
{
    char *arr[]={"even","odd"};
    int n,r;
    printf("Enter number:");
    scanf("%d",&n);
    r=n%2;
    printf("Given number is %s",arr[r]);
    return 0;
}

output:
Enter number:2
Given number is even 
*/
