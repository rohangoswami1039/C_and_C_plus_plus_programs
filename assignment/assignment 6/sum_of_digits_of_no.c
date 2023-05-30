#include <stdio.h>
#include <conio.h>
void main()
{
   int n, t, sum = 0, rem;
   printf("Enter an integer \n");
   scanf("%d", &n);
   t=n;
   while (t != 0)
   {
      rem = t % 10;
      sum = sum + rem;
      t = t / 10;
   }
   printf("Sum of digits of %d = %d\n", n, sum);
   getch();   
}
