#include <stdio.h>
#include <conio.h>

void main(){
	int i,n,fac=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("factorial = %d ",fac);
	getch();
}
