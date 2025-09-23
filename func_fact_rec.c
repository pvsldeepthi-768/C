#include <stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int f,n;
    printf("Enter number:");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial is %d",f);
    return 0;
}
/*
Enter number:5
Factorial is 120
*/
