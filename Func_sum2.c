#include <stdio.h>
void sum2(int a,int b){
    printf("Sum is %d",a+b);
}

int main(){
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    sum2(a,b);
    return 0;
}
/*
Enter 1st number:3
Enter 2nd number:4
Sum is 7
*/
