#include<stdio.h>
#include<conio.h>
void main(){
	int d,y,m,w,n;
	printf("Enetr the numbers: ");
	scanf("%d",&n);
	y=n/365;
	m=n/30;
	w=(n%365)/7;
	d=(n%365)%7;
	printf("days : %d \n",d);
	printf("weeks : %d \n",w);
	printf("Months : %d \n",m);
	printf("years : %d \n",y);
	
getch();
}
