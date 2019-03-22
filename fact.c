#include <stdio.h>

int main()
{
  int c, n, fact = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    fact = fact * c;

  if(n==1)
    prontf("1");
  return 1;
  else
    printf("%d*",n);
  return(n*fact(n-1));

  return 0;
}
