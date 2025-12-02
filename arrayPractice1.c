
#include <stdio.h>

int main() {
    int arr[]={ 23,06,56,13,89,45};
    int i,ecount=0,gmce=0,f=1;
    for(i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            ecount++;
        }
        if(arr[i]>arr[3])
        {
            gmce++;
        }
    }
    if(ecount>=2){
        printf("%d\n",arr[0]);
    
        f=0;
    }
    if(gmce>=3)
    {
        printf("%d\n",arr[gmce]);
        f=0;
    }
    if(arr[0]==arr[4])
    {
        printf("%d\n",arr[5]);
    
        f=0;
    }
    if(f)
    {
        for(i=0;i<6;i++)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}
//output 
//23
//89
