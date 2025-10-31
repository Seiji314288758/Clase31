/*Victor Seiji Nieto Morita
clase 3 ejercicio 9*/

#include <stdio.h>

int main()
{
  int i, numero;
  int menor;

  printf("Ingrese el número 1. ");
  scanf("%d", &menor); //El primero se guarda como referencia inicial

  //Leer los 4 números restantes
  for (i = 2; i <= 5; i++)
    {
     printf("Ingrese el número %d: ", i);
     scanf("%d", &numero);

     if (numero < menor)
      {
        menor = numero; //Actualiza el menor si encuentra uno más pequeño
      }
    }

    printf("\nEl número menor es: %d\n", menor);

    return 0;
}
