#include<stdio.h>
void main(){
	int n,i ,a[100],b[100],sum;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the Elements: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			sum=a[i]-a[i+1];
			b[i]=sum;
			printf("%d ",b[i]);
		}
		else if(a[i+1]>a[i]){
			sum=a[i+1]-a[i];
			b[i]=sum;
			printf("%d ",b[i]);
		}
	}
}
