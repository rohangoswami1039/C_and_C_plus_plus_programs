#include <stdio.h>
void main(){
int i,j;

for(i=1;i<=3;i++){
	for(j=1;j<=5;j++){
		if(j>=4-i && j<=2+i){
			if(j==4-i || j==2+i){
				printf("1");
			}
			else {
				printf("2");
			}
		}
		else{
			printf(" ");
		}
}
	printf("\n");
	}
}

