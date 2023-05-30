#include<stdio.h>
void main()
{
  int i,n, t, s, CD, fact;
  printf("Enter an Integer: ");
  scanf("%d",&n);
  t = n;
  s = 0;

  while(t!=0)
  {
    CD = t % 10;
    fact = 1;

    for( i=1; i<=CD; i++)
    {
      fact *= i;
    }

    s += fact;
    t /= 10;
  }

  if(s == n)
  {
    printf("%d is Krishnamurthy Number.",n);
  }
  else
  {
    printf("%d is not a Krishnamurthy Number.",n);
  }
}
