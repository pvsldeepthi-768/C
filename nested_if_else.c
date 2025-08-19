#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%3==0){
        if(num%5==0){
        printf("FizzBuzz");
        }
        else{
            printf("Fizz");
        }
    }
    else if(num%5==0){
        printf("Buzz");
    }
    else{
        printf("Number is not divisible by 3 and 5");
    }
    return 0;
}
/*output
Enter number:34
Number is not divisible by 3 and 5
*/
