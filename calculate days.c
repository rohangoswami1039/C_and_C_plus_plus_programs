#include<stdio.h>
#include<conio.h>
void main(){
	int n,days,year,months;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n>0){
		if(n<30){
			printf("Days are: %d \n",n);
			printf("Months are: %d \n",months);
			printf("Year are: %d \n",year);
			year =year +1;
			printf("%d",year);
		}
	}	
	getch();
}
