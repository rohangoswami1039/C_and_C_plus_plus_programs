#include <stdio.h>
void main()
{
	int i,j,a[100],n,temp;
	
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
  	
	printf("Sorted array is : ");
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}

}
