#include <stdio.h>
#include <conio.h>
void main()
{
	float p,r,t,si;
	printf("Enter the principal value :");
	scanf("%f",&p);
	printf("Enter the Rate value :");
	scanf("%f",&r);
	printf("Enter the Time :");
	scanf("%f",&t);
	si=(p*r*t)/100.0;
	printf("The Simple Intrest is :%f",si);
	getch();
}


