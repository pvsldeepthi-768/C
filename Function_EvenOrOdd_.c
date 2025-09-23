#include <stdio.h>
void isEvenOdd(int n){
    printf("Number is %s",(n%2)==0?"Even":"Odd");
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    isEvenOdd(n);
    return 0;
}
/*
Enter number:3
Number is Odd */
