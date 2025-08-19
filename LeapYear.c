#include<stdio.h>
#include<stdbool.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    switch((year%4==0)||(year%100==0)){
        case true:printf("Leap year");
                  break;
        default:printf("Not a leap year");
    }
    return 0;
}
/*output
Enter year:2025
Not a leap year
Enter year:2024
Leap year
*/
