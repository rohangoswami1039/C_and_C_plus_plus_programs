#include <stdio.h>
void main(){
	int i,j,n,arr[100],swap;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	

	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&arr[i]);
	}


	for(i=0;i<n-1;i++){
		
		for(j=0;j<n-i-1;j++){
		
			if(arr[j]>arr[j+1])
			{
				swap    =arr[j];
				arr[j]  =arr[j+1];
				arr[j+1]=swap;
			}
		}
		
	}
	
	
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
