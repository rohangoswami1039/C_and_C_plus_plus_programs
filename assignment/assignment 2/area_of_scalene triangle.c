#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a,b,c,s,area;
	printf("Program to find the area of scalene triangle \n");
	printf("Enter the sides of the triangle: ");
	scanf("%f""%f""%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area is :%f",area);
	getch();	
}




