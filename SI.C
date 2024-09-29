#include<stdio.h>
#include<conio.h>
void main()
	{
	long int p,r,t,si,a;
	clrscr();
	printf("Enter principal=\nrate\ntime:");
	scanf("%ld%ld%ld",&p,&r,&t);
	si=(p*r*t)/100;
	printf("SI=%ld",si);
	a=si+p;
	printf("\namount to be paid=%ld",a);
	getch();
	}