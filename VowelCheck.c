#include<stdio.h>
int main(){
    char character;
    printf("Enter character:");
    scanf("%c",&character);
    if((character>='a' && character<='z')|| (character>='A' && character<='Z')){
        if (character=='a' || character =='A'){
            printf("Vowel");
        }
        else if (character=='e' || character =='E'){
            printf("Vowel");
        }
        else if (character=='i' || character =='I'){
            printf("Vowel");
        }
        else if (character=='o' || character =='O'){
            printf("Vowel");
        }
        else if (character=='u' || character =='U'){
            printf("Vowel");
        }
        else{
            printf("Consonent");
        }
    }
    else{
        printf("not an alphabet");
    }
    return 0;
}
/*output
Enter character:#
not an alphabet
Enter character:E
Vowel
Enter character:p
Consonent*/
