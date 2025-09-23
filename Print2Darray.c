#include <stdio.h>
int main(){
    int i,j;
    int arr[3][5]={
        
        {11,12,13,14,15},
        {21,22,23,24,25},
        {31,32,33,34,35}
    };
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
 11  12  13  14  15 
 21  22  23  24  25 
 31  32  33  34  35 
  */
