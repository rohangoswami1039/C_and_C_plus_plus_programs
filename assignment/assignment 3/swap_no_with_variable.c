#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	printf("Enter the 1st number a =");
	scanf("%d",&a);
	printf("Enter the 2nd number b =");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a = %d \n",a);
	printf("b = %d \n",b);
	getch(); 
}




