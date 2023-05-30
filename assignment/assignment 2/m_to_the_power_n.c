#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float m,n,ans ;
	printf("Program to find the m to the power n\n");

	printf("Enter the value of m and n: ");
	scanf("%f%f",&m,&n);
	ans=pow(m,n);
	printf("The %f to the power %f is %f",m,n,ans);
	getch();
	
}
