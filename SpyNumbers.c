#include<stdio.h>
int main(){
  int num,i,s,m,t;
  printf("Enter a range:");
  scanf("%d",&num);
  printf("Spy numbers:");
  for(i=1;i<=num;i++){
     t=i;
     s=0;
     m=1;
     while(t!=0){
     s+=t%10;
     m*=t%10;
     t=t/10;
     }
     if (s==m){
       printf("%d  ",i);
  }
}
  return 0;
}
/* output

Enter a range:100
Spy numbers:1  2  3  4  5  6  7  8  9  22  
*/
