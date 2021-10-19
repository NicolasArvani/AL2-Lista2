#include <stdio.h>
#include <string.h>

int qtdDigitos();

int main()
{
  char x[9999];
  scanf("%[^\n]", x);
  printf("%d", qtdDigitos(x));

  return 0;
}


int qtdDigitos(char x[9999])
{
  int qtd;
  qtd = strlen(x);

  return qtd;
}
