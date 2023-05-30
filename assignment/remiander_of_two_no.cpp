#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,sum ;
	printf("Program to Remainder of two numbers \n");
	printf("Enter the 1st number: ");
	scanf("%d",&a);
	printf("Enter the 2nd number: ");
	scanf("%d",&b);
	sum=a%b;
	printf("The remainder of %d and %d is: %d ",a,b,sum);
	return(0);
	getch();
}
