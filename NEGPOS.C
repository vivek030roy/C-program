#include<stdio.h>
#include<conio.h>
void main()
	{
	int m;
	clrscr();
	printf("Enter no.:");
	scanf("%d",&m);
	if(m>0)
	{
	printf(" no. is positive");
	}
	else if(m<0)
	{
	printf("No. is negative");
	}
	else if(m==0)
	{
	printf("No. is neither positive nor negative");
	}
	getch();
	}