/*Victor Seiji Nieto Morita
clase 3 ejercicio 7*/

#include <stdio.h>

int main()
{
  int num1, num2, num3;

  printf("Ingrese el primer número (una cifra): ");
  scanf("%d", &num1);

  printf("Ingrese el segundo número (una cifra): ");
  scanf("%d", &num2);

  printf("Ingresa el tercer número (una cifra): ");
  scanf("%d", &num3);

  if (num1 == 1 && num2 == 2 && num3 == 3)

  {
   printf("Acceso permitido\n");
  }

  else

  {
   printf("Acceso denegado\n");
  }

  return 0;
}
