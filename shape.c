#include<stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    switch(a){
    case 3:
        printf("Triangle");
        break;
    case 4:
        printf("Quadrilateral");
        break;
    case 5:
        printf("Pentagon");
        break;
    case 6:
        printf("Polygon");
        break;
    default:
        printf("Invalid shape");}
}
