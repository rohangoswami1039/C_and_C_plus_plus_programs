#include <stdio.h>
#include <conio.h>
void main()
{
	int m1,m2,m3,avg;
	int code;
	printf("Enter the marks : ");
	scanf("%d%d%d",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	if (avg<=100)
	{
		code =avg/10;
		switch(code){
			case 10:printf("O");
				break;
			case 9 :printf("O");
				break;
			case 8:printf("E");
				break;
			case 7:printf("A+");
				break;
			case 6:printf("A");
				break;
			case 5:printf("B+");
				break;
			case 4:printf("B");
				break;
			default :printf("F");
				break;
			}	
		}
	else 
	{
		printf("Enter the correct value");	
	
	}
		
}

