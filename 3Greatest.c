#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scnaf("%d%d%d",&a,&b,&c);
    printf("Greatest number:")
    if(a>b && a>c){
        printf("%d",a);
    }
    else if(b>c && b>a){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    
    return 0;
}
/*output
Enter 3 numbers:212
31
123
Greatest number:212
#include <stdio.h>

int main()
{
    int a,b,c,r;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Greatest number:");
    //ternary operator
    r=a>b?(a>c?a:(b>c?b:c)):(b>c)?b:c;
    printf("%d",r);
    
    return 0;
}

output:
Enter 3 numbers:23
12
31
Greatest number:31
*/
