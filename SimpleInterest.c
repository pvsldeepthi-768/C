#include <stdio.h>

int main()
{
    float  amount,rate,Time,si;
    printf("Enter Principal amount,rate and time(in years):");
    scanf("%f%f%f",&amount,&rate,&Time);
    si=(amount*rate*Time)/100;
    printf("Simple intrest:%.1f",si);
    return 0;
}
/*output

Enter Principal amount,rate and time(in years):100000
2
0.5
Simple intrest:1000.0
*/
