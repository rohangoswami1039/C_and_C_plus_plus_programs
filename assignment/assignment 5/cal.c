#include <stdio.h>
#include <conio.h>
void main(){
	int ch,n1,n2,add,mul,sub,div;	
	printf("\n 1. Add"); printf("\n 2. subtract"); printf("\n 3. Multiplication "); printf("\n 4. Divide "); printf(" \n \n Enter your choice ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter the 1st number: ");
			scanf("%d",&n1);
			printf("Enter the 2nd number: ");
			scanf("%d",&n2);
			add=n1+n2;
			printf("\n %d",add);
			break;
		case 2:
			printf("Enter the 1st number: ");
			scanf("%d",&n1);
			printf("Enter the 2nd number: ");
			scanf("%d",&n2);
			sub=n1-n2;
			printf("\n %d",sub);
			break;
		case 3:
			printf("Enter the 1st number: ");
			scanf("%d",&n1);
			printf("Enter the 2nd number: ");
			scanf("%d",&n2);
			mul=n1*n2;
			printf("\n %d",mul);
			break;
		case 4:
			printf("Enter the 1st number: ");scanf("%d",&n1);
			printf("Enter the 2nd number: ");scanf("%d",&n2);
			div=n1/n2;
			printf("\n %d",div);
			break;
	}
}

