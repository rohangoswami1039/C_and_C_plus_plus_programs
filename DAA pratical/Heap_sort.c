#include <stdio.h>

void creating_heap(int a[], int n, int i)  
{  
    int largest = i;   
    int left = 2 * i + 1;   
    int right = 2 * i + 2; 
    if (left < n && a[left] > a[largest])  
        largest = left;    
    if (right < n && a[right] > a[largest])  
        largest = right;  
     
    if (largest != i) {  
        
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        creating_heap(a, n, largest);  
    }  
}
void heapSort(int a[], int n)  
{  
	int i;
    for ( i = n / 2 - 1; i >= 0; i--)  
        creating_heap(a, n, i);  
  
    for (i = n - 1; i >= 0; i--) {  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        creating_heap(a, i, 0);  
    }  
}  

void  main(){
	int arr[100],n,i=0,j=0;
	 
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the %d Element: ",i);
		scanf("%d",&arr[i]);
	}
	
	heapSort(arr,n);
	
	for(j=0;j<n;j++){
		printf("%d \n",arr[j]);
	}
	
}
