#include <stdio.h>
void pyramid(int n){
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
            /* for(j=n-1;j>0;j--)
        {
         if(i>=j){
             printf("*");
         }
         else{
         printf(" ");
         }
        }
        for(j=0;j<n;j++)
        {
         if(i<j){
             printf(" ");
         }
         else{
         printf("*");
         }
        }*/
        printf("\n");
    }
}

int main(){
    int n;
    printf("pyramid height:");
    scanf("%d",&n);
    pyramid(n);
    return 0;
}
/*
pyramid height:3
  * 
 * * 
* * * 

pyramid height:5
    *    
   ***   
  *****  
 ******* 
*********



*/

