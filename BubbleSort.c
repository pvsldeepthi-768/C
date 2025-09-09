///Date:9/9/2025
#include <stdio.h>

int main() {
    // Write C code here
    int i,n,a[10],temp;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nOriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++){
       if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
        }
    }
    printf("\nSorted array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
/*
output:
Enter array size:8

Enter elements:12 2 3 4 5 6 7 11

Original array:
12	2	3	4	5	6	7	11	
Sorted array:
2	3	4	5	6	7	11	12	

=== Code Execution Successful ===*/
