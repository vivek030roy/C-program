#include<stdio.h>
#include<conio.h>
void main()
	{
  float t;
	int m;
	clrscr();
	printf("Enter your marks:");
	scanf("%d",&m);
	t=m/6;
	if(t>=95)
	{
	printf(" you  are selected with a+");
	}
	else if(t>=75)
	{
	printf("congrats,you are selected :");
	}
	else
	{
	printf("Sorry|better luck next time");
	}
	getch();
	}