// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,n1,n2,a[10],b[10],f,idx=0;
    printf("Enter array A size:");
    scanf("%d",&n1);
    printf("\nEnter elements:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter array B size:");
    scanf("%d",&n2);
    printf("\nEnter elements:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n1;i++){
        idx=i;
        for(j=0;j<n2;j++){
            if(b[j]==a[i+j]){
                f=1;
            }
            else{
                f=0;
            }
        }
        if(f){
            printf("\nIndexes: ");
            for(j=0;j<n2;j++){
            printf("%d\t",idx+j);
            }
            break;
        }
    }

    return 0;
}
/*output
Enter array A size:8

Enter elements:45 34 16 1 4 3 18 19

Enter array B size:3

Enter elements:1 4 3

Indexes: 3	4	5	

=== Code Execution Successful ===*/
