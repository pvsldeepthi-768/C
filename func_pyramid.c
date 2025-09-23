#include <stdio.h>
void pyramid(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>0;j--)
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
        }
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
pyramid height:5
    *    
   ***   
  *****  
 ******* 
*********
*/
