#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float dc,df;
	printf("program to conert celsius to fahrenheit \n");
	printf("Enter the value in celsius: ");
	scanf("%f",&dc);
	df=dc*1.8+32;
	printf("\n In celsius: %f C",dc);
	printf("\n In fahrenheit: %f F",df);
	getch();
}
