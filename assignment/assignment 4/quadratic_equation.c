#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
	int a,b,c,d,xa,xb;
	printf("quadratic equation :  ax^2 + bx + c \n");
	printf("Enter the value of a: ");
	scanf("%d",&a); 
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	d=b*b-4*a*c;
	if (d<0){
		printf("The roots are imaginary ");
	}
	else if (d>0){
		printf("The roots are real ");
		xa=(-b+sqrt(b*b-4*a*c))/(2*a);
		xb=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("Roots are : %d and %d",xa,xb);
	}
	else if (d=0){
		printf("The equation has 1 real root: ");
		xa=(-b+sqrt(b*b-4*a*c))/(2*a);
		printf("Root is : %d",xa);
		
	}
	getch();
}
