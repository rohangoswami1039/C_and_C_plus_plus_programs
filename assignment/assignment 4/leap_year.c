#include <stdio.h>
#include <conio.h>
void main(){
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	if (year%4==0){
		printf("The year is leap year ");
	}
	else{
		printf("The year is not a leap year ");
	}
	getch();
}
