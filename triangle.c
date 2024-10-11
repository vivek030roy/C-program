#include<stdio.h>

void main(){
    int a,b,c;
    char type;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        type = 'e';
    }
    else if(a==b | b==c || c==a){
        type = 's';
    }
    else{
        type = 'l';}
    switch(type){
    case 'e':
        printf("Equilateral triangle");
        break;
    case 's':
        printf("Scalar triangle");
        break;
    case 'l':
        printf("Lateral triangle");
    default:
        printf("Wrong input");}
}
