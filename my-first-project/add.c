#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,b,add;
	printf("Enter a value = ");
	scanf("%d",&a);
	printf("Enter b value = ");
	scanf("%d",&b);
	add = a+b;
	printf("The sum of given numbers = %d", &add);
	getch();
	return(0);
}
