#include<stdio.h>
#include<conio.h>
void main()
       {
	int a,b;
	clrscr();
	printf("Emter any two no.");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping A=%d\nB=%d",a,b);
	getch();
       }
