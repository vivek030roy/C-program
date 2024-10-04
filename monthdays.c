#include<stdio.h>
int main()
{
int n;
printf("enter No.(1-12)");
scanf("%d",&n);
if(n==1)
{
    printf("january=31 days");
}
else if(n==2)
{
    printf("february=28/29 days");
}
else if(n==3)
{
    printf("March=31 days");
}
else if(n==4)
{
    printf("April=30 days");
}
else if(n==5)
{
    printf("May=31days");
}
else if(n==6)
    printf("june=30");
else if(n==7)
    printf("july=31days");
else if(n==8)
    printf("august=31days");
else if(n==9)
    printf("September=30 days");
else if(n==10)
    printf("october=31days");
else if(n==11)
    printf("November=30 days");
else if(n==12)
    printf("December=31days");
else
    printf("Wrong input");
return 0;
}
