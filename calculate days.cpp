#include<stdio.h>
#include<conio.h>
void main(){
	int n,days,year,months,tmonth,tdays;
	printf("Enter the number: ");
	scanf('%d',&n);
	if(n>0){
		if(n<31){
			printf("Days are: %d",n);
		}
		else(n>31){
			months=n/30;
			days=n%30;
			printf("Month: %d \n days: %d",months,days);
			if(n>365){
				year=n/365;
				tmonth=n-(year*365)
				months=tmonth/30
				printf("Month: %d",months);
			}
			else(){
				printf("wrong entry")
			}
		}
	}
	else{
		printf("Wrong Entry")
	}
	getch();
}
