#include <stdio.h>
#include <math.h>


double Ant();

int main()
{
  double f, t;
  int n, p;

  scanf("%lf %d %lf", &f, &n, &t);
  p = f / Ant(t, n);

  printf("%d\n", p);

  return 0;
}


double Ant(double t, int n)
{
  double x, y;
  double ant;

  x = pow((1+t), n)-1;
  y = t*(pow((1+t), n));
  
  ant = x/y;

  return ant;

  return x;
}
