#include<stdio.h>
void main()
{
	int i,j,l=6;
	for(i=0;i<l;i++){
		for(j=1;j<i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
