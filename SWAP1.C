#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter anty two no.:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("Swapped no:a=%d\nb=%d",a,b);
getch();
return 0;
}