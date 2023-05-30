#include<stdio.h>
int main(){
	int a[40],max,smax,i,n;
	printf("inter the size of array ");
	scanf("%d",&n);
	printf("inter the element in array \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i])
		max=a[i];
	}
	smax=a[0];
	for(i=0;i<n;i++){
		if(smax>a[i])
		smax=a[i];
	}
	for(i=0;i<n;i++){
		if(max>a[i]){
			if(smax<a[i])
		smax=a[i];
		}
	}	
printf("Second max = %d",smax);
		return 0;
}
