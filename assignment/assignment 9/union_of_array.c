#include<stdio.h>
int main()
{
int a1[100],a2[100],u[100],i,j,k,n,m,flag;

printf("Enter size of first array:");
scanf("%d",&n);
for(i=0;i<n;++i){
	printf("Enter element of first array: ");
	scanf("%d",&a1[i]);
}

printf("\nEnter size of second array:");
scanf("%d",&m);
for(i=0;i<m;++i){
	printf("Enter element of second array: ");
	scanf("%d",&a2[i]);
}

k=0;
for(i=0;i<n;++i){
	u[k]=a1[i];
	k++;
}
for(i=0;i<m;++i){
	flag=1;
	for(j=0;j<n;++j){
		if(a2[i]==a1[j]){
		flag=0;
		break;
	}
}
if(flag){
	u[k]=a2[i];
	k++;
	}
}
printf("\nUnion of two arrays is:\n");
	for(i=0;i<k;++i){
		printf("%d ",u[i]);
}
 return 0;
}
