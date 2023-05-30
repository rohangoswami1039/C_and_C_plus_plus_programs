#include <stdio.h>
#include <conio.h>

void main(){
	float i,n,sum=0;
	printf("Enter the value of n: ");
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+(i/(i+1));
	}
	printf("Sum = %f ",sum);
	getch();
}

