#include <stdio.h>
#include <conio.h>
void main(){
	int n ,even;
	printf("Enter the number: ");
	scanf("%d",&n);
	even=n%2;
	switch(even)
	{
	
	case 0:
		printf("number is even ");
		break;
	case 1:
		printf("number is odd");
		break;
				
	}
}

