// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,n,a[10],temp,target;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter target:");
    scanf("%d",&target);
    printf("\nOriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nElements:\n");
    for(i=0;i<n-1;i++){
        if(a[i+1]+a[i]==target){
            printf("%d and %d",a[i],a[i+1]);
        }
    }
    return 0;
}
/*output
Enter array size:10

Enter elements:12 18 45 9 23 90 11 3 5 7
Enter target:101

Original array:
12	18	45	9	23	90	11	3	5	7	
Elements:
90 and 11

=== Code Execution Successful ===*/
