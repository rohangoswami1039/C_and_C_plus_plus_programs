#include <stdio.h>
#include <conio.h>
void main()
{
	int n,first,last,sum;
	printf("Enter the number: ");
	scanf("%d",&n);
	first=n/1000;
	last=n%10;
	sum=first+last;
	printf("The sum of 1st and last number of 4 digit number is :%d",sum);
	getch();
}





