#include <stdio.h>
int main(){
    int i,j,max,smx=0,sm;
    int arr[3][5]={
        
        {11,12,13,14,15},
        {21,22,23,24,25},
        {31,32,33,34,35}
    };
    for(i=0;i<3;i++){
        sm=0;
        for(j=0;j<5;j++){
            sm+=arr[i][j];
        }
        if(sm>smx){
            max=i;
        }
    }
    printf("Majority row:");
    for(j=0;j<5;j++){
        printf("%d ",arr[max][j]);
    }
    return 0;
}

/*
Majority row:31 32 33 34 35 */
