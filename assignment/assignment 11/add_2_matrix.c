#include <stdio.h>
 
void  main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   
   printf("Enter the values of 1st matrix \n");
   for (c = 0; c < m; c++){
      for (d = 0; d < n; d++){
      	 printf("Enter the elements of %d and %d index",c,d);
		 scanf("%d", &first[c][d]);
	  }
    }
	printf("Enter the values of 2nd matrix \n");
      for (c = 0; c < m; c++){
      for (d = 0; d < n; d++){
      	 printf("Enter the elements of %d and %d index",c,d);
		 scanf("%d", &second[c][d]);
	  }
    }
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
}
