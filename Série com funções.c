#include <stdio.h>

int eh_primo();
int proximo_primo();
int fatorial();
double SomaF();


int main()
{
  int i, j, n;
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    printf("%d!/%d", i, proximo_primo(i));
    if(i != n)
      printf(" + ");
  }
  printf("\n");
  printf("%.2lf\n", SomaF(n));
  
  return 0;
}

double SomaF(int n)
{
  double soma=0;
  int i;

  for(i = 1; i <= n; i++)
    soma += (double)fatorial(i)/proximo_primo(i);

  return soma;
}

int eh_primo(int x) //se return == 0, ent primo
{
  int i, qtd=0, f=0;

  for(i = x; i > 0; i--)
    if(x % i == 0)
      qtd++;
  
  if(qtd > 2)
    f = 1;
  
  return f;
}

int proximo_primo(int x)
{
  int i, primo;

  for(i = x; i > 0; i++)
  {
    if(eh_primo(i) == 0)
    {
      primo = i;
      break;
    }
  }
  return primo;
}

int fatorial(int x)
{
  int i, soma = x;

  for(i = x-1; i > 0; i--)
    soma *= i;

  return soma;
}

