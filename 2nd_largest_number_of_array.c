#include<stdio.h>
void main()
{
	int arr[100],n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
}
