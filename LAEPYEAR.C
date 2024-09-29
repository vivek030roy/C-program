#include<stdio.h>
#include<conio.h>
	void main()
	{
	int y;
	clrscr();
	printf("Enter year" );
	scanf("%d",&y);
	if(y%4==0&&y%400)
	{
	printf("Enter leap year=%d",y);
	}
	else
	{
	printf("Normal year");
	}
	getch();
	}