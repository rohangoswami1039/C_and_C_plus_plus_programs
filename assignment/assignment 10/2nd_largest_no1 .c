#include <stdio.h>

void main(){
  int arr1[50],n,i,j=0,max,max2;    
	   printf("Input the size of array : ");
       scanf("%d", &n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
  max=0;
  for(i=0;i<n;i++)
  {
      if(max<arr1[i])
	  {
           max=arr1[i];
           j = i;
      }
  }
  max2=0;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  
		  i--;
        }
      else
        {
          if(max2<arr1[i])
	     {
               max2=arr1[i];
             }
        }
  }
printf("The Second largest element in the array is :  %d \n\n", max2);
}
