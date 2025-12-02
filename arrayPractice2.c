// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char arr[][5]={"AIML","EDC","WERE","ADA","BD","E","K"};
    int i,wl;
    char temp,actual_arr[7][5];
    
    for(i=0;i<7;i++)
    {
        strcpy(actual_arr[i],arr[i]);
        wl=strlen(arr[i]);
        temp=arr[i][0];
        arr[i][0]=arr[i][wl-1];
        arr[i][wl-1]=temp;
    }
    printf("Input array:{");
    for(i=0;i<7;i++)
    {
        printf("'%s',\t",actual_arr[i]);
    }
    printf("}\nOutput array:{");
    for(i=0;i<7;i++)
    {
        printf("'%s',\t",arr[i]);
    }
    printf("}");
    return 0;
}
/*
output:
Input array:{'AIML',	'EDC',	'WERE',	'ADA',	'BD',	'E',	'K',	}
Output array:{'LIMA',	'CDE',	'EERW',	'ADA',	'DB',	'E',	'K',	}
*/
