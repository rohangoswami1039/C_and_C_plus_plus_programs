#include <stdio.h>
void main(){
	int a[100],sum=0,i,b[100],n;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		sum=sum+a[i];
		b[0]=sum;
	}
	printf("%d",b[0]);
}
