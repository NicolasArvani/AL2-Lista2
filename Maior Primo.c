#include <stdio.h>

int primo();

int main()
{
  int n, maior = -1;
  scanf("%d", &n);
  while(n != 404)
  {
    if(primo(n) > maior)
      maior = primo(n);
    scanf("%d", &n);
  }

  if(maior == -1 || maior == 1 || maior == 0)
    printf("SEM PRIMOS\n");
  else
    printf("%d\n", maior);

  return 0;
}


int primo(int x)
{
  int i, qtd=0, f=0;

  for(i = x; i > 0; i--)
    if(x % i == 0)
      qtd++;
  
  if(qtd > 2)
    f = -1;
  else
    f = x;
  
  return f;
}
