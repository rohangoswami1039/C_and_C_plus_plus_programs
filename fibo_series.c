#include <stdio.h>
int f(int i){
	if(i==0)
	{
	return 0;
	}
	if(i==1){
		return 1;
	}	
	return(f(i-1)+f(i-2));
}

void main(){
	int i ;
	for(i=0;i<10;i++){
		printf("%d\t",f(i));
	}
}
