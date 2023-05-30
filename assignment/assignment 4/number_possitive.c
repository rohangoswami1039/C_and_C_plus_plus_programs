#include <stdio.h>
#include <conio.h>
void main() {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if (n==0){
		printf("The number is zero");
	}
	else if (n<0){
		printf("The number is negative ");
	}
	else if (n>0){
		printf("The number is possitive ");
	}
	else {
		printf("Invalid choice ");
	}
	getch();
}
