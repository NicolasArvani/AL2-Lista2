#include <stdio.h>
#include <math.h>

void XZ();
double coordenada();

int main()
{
  int x, z;
  scanf("%d%d", &x, &z);
  XZ(x, z);

  return 0;
}


void XZ(int x, int z)
{
  printf("Distancia para Hogsmeade: %.2lf\n", coordenada(x, z, 34, 220));
  printf("Distancia para Kakariko: %.2lf\n", coordenada(x, z, 0, 0));
  printf("Distancia para Solitude: %.2lf\n", coordenada(x, z, 140, 456));
}

double coordenada(int x1, int z1, int x2, int z2)
{
  double d;
  d = sqrt(pow(x1-x2,2) + pow(z1-z2,2));

  return d;
}
