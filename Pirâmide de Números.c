#include <stdio.h>

void piramide();

int main()
{
  int n;
  scanf("%d", &n);
  piramide(n);
  return 0;
}


void piramide(int n)
{
  int i, j;

  for(i = 1; i <= n; i++)
  {
    for(j = 0; j < i; j++)
    {
      printf("%d", j+1);
      if(j != i-1)
        printf(" ");
    }
    printf("\n");
  }
}