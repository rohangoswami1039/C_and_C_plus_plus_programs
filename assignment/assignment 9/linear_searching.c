#include <stdio.h>
void main()
{
  int array[100], search, i, n,c,flag=0;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
 
  
	for (c = 0; c < n; c++)
	{
		 printf("Enter %d Element: ", n);
	    scanf("%d", &array[c]);
	}

  printf("Enter a number to search\n");
  scanf("%d", &search);
	for (i = 0; i < n; i++)
  {
    if (array[i] == search)    
    {
      printf("%d is present at location %d.\n", search, i);
      flag=1;
    }
  }
  if (flag=0)
    printf("%d isn't present in the array.\n", search);
}
