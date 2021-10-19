#include <stdio.h>

void fibonacci();

int main()
{
  int n;
  scanf("%d", &n);
  fibonacci(n);

  return 0;
}

void fibonacci(int n)
{
  int x1 = 0, x2 = 1, aux, i;
  printf("%d\n%d\n", x1, x2);
  for(i = 0; i < n-2; i++)
  {
    aux = x1 + x2;
    x1 = x2;
    x2 = aux;
    printf("%d\n", x2);
  }
}