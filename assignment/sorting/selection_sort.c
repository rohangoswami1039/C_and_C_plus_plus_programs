#include <stdio.h>
void main()
{
	int i,j,arr[100],n,min,swap;
	
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&arr[i]);
	}
	
	for (i = 0; i<n-1; i++) {
      min = i;
      for (j= i+1; j<n; j++) 
	  {
         if (arr[min] > arr[j])
            min = j;
      }
      if (min != i) {
         swap = arr[i];
         arr[i] = arr[min];
         arr[min] = swap;
      }
  	}	
  	
	printf("Sorted array is : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

}
