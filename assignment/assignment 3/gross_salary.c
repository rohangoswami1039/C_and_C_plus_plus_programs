	#include <stdio.h>
	#include <conio.h>
	void main()
	{
		float ta,da,hra,salary,gross;
		printf("Enter the salary: ");
		scanf("%f",&salary);
		ta=(20*salary)/100.0;
		da=(50*salary)/100.0;
		hra=(10*salary)/100.0;
		gross=salary+ta+da+hra;
		printf("The gross salary is: %f",gross);
		getch();
	}
	
	
	
