#include <stdio.h>

void imprimir();


int main()
{
  int x;
  scanf("%d", &x);
  imprimir(x);
  return 0;
}


void imprimir(int x)
{
  int i, j;

  for(i = x; i > 0; i--)
  {
    for(j = i; j > 0; j--)
    {
      if(j != i)
        printf("-");
      printf("%d", i);
    }
    printf("\n");
  }
}

