#include <stdio.h>
#include <string.h>

int calcular_leds();

int main()
{
  char c;
  int soma;
  int i, n;

  scanf("%d", &n); getchar();

  for(i = 0; i < n; i++)
  {
    soma = 0;
    scanf("%c", &c);
    while(c != 10)
    {
      soma += calcular_leds(c);
      if(scanf("%c", &c) == EOF)
        break;
    }

    printf("%d leds\n", soma);
  }


  return 0;
}


int calcular_leds(int c)
{
  int qtd;
  c -= 48;
  
  switch(c)
  {
    case 0: qtd = 6; break;
    case 1: qtd = 2; break;
    case 2: qtd = 5; break;
    case 3: qtd = 5; break;
    case 4: qtd = 4; break;
    case 5: qtd = 5; break;
    case 6: qtd = 6; break;
    case 7: qtd = 3; break;
    case 8: qtd = 7; break;
    case 9: qtd = 6; break;
    default: break;
  }

  return qtd;
}

