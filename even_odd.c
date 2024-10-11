#include<stdio.h>

void main(){
    int a;
    char type;
    scanf("%d",&a);
    if(a%2==0){type = 'e';}
    else{type = 'o';}
    switch(type){
    case 'e':
        printf("%d is even",a);
        break;
    case 'o':
        printf("%d is odd",a);
        break;
    default:
        printf("Wrong Input");}
}
