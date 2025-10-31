/*Victor Seiji Nieto Morita
clase 3 ejercicio 6*/

#include <stdio.h>

int main ()
{
  float x, fx;

  printf("Ingrese el valor de x: ");
  scanf("%f", &x);

  if (x <= 0)
   {
    fx = x + 3;
   }
else 
   {
    fx = (x * x) + (2 * x);
   }
  printf("El valor de f(x) es: %.2f\n", fx);

return 0;
}
