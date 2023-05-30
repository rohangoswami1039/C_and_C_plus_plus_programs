#include <stdio.h>
void main()
{
	//input array
	int a[100],n,i,j,min,swap;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the %d elements of : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if (a[min] > a[j])
				min = j;
		}
		if (min != i) {
         swap = a[i];
         a[i] = a[min];
         a[min] = swap;
		 }
	}
	//printing the array 
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	getch();
}

