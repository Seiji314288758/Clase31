/*Victor Seiji Nieto Morita
clase 4 ejercicio 8*/

#include <stdio.h>
#include <math.h>

int main()
{
  double base, resultado_pow, resultado_bucle = 1;
  int exponente;

  printf("Introduce la base: ");
  scanf("%lf", &base);
  printf("Introduce el exponente (entero): ");
  scanf("%d", &exponente);

  resultado_pow = pow(base, exponente);

  if (exponente >= 0)
   {
    for (int i = 0; i < exponente; i++)
      {
            resultado_bucle *= base;
      }
   }
  else
   {
     for (int i = 0; i < (-exponente); i++) 
     {
            resultado_bucle *= base;
     }
        resultado_bucle = 1 / resultado_bucle;
   }
 
     printf("\nMétodo a) Usando pow(): %.2lf ^ %d = %.4lf\n", base, exponente, resultado_pow);
     printf("Método b) Usando bucle: %.2lf ^ %d = %.4lf\n", base, exponente, resultado_bucle);

    return 0;
}
     
