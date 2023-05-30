#include <stdio.h>
void main(){
	int a[100],sum=0,i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("Sum = %d",sum);
}
