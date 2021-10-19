#include <stdio.h>
#include <math.h>


int soma();
int main()
{
  long long int x;

  scanf("%lld", &x);
  printf("%d\n", soma(x));

  return 0;
}

int soma(long long int x)
{
  int soma = 0;

  while((x >= 10 &&  x > 0) || (x <= 10 && x < 0))
  {
    soma += x%10;
    x /= 10;
  }
  
  soma+=x;

  return soma;



}