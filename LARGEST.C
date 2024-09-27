#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three n0.s:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
	printf("a is greater=%d",a);
	}
	else if(b>c)
	{
	printf("B is greater=%d",b);
	}
	else
	{
	printf("c is greater=%d",c);
	}
	getch();
}
