#include<stdio.h>

void main(){
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel",c);
            break;
        default:
            printf("%c is an consonant",c);
    }
}
