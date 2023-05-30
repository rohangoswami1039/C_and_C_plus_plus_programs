#include <stdio.h>
#include <conio.h>
int main()
{
	int l,b,area;
	printf("Program to find the area of the rectangle \n \n");
	printf("Enter the length of the rectangle: ");
	scanf("%d",&l);
	printf("Enter the breath of the rectangle: ");
	scanf ("%d",&b);
	area=l*b;
	printf("The Area of the rectangle of length: %d and breath: %d is %d",l,b,area);
	return(0);
	getch(); 
}


