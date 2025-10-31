/*Victor Seiji Nieto Morita
clase 4 ejercicio 10*/

#include <stdio.h>
int main()
{
  int numero, contador = 0;
  int suma = 0;

  printf("=== LECTURA DE NUMEROS ===\n");

  while (contador < 10 && suma <=100)
   {
     printf("Introduce un numero: ");
     scanf("%d", &numero);

     suma += numero;
     contador++;
   }
printf("\nSuma total: %d\n", suma);
printf("Cantidad de numeros introducidos: %d\n", contador);

if (suma > 100)
  {
   printf("Se ha detenido porque la suma supera 100.\n");
  }
else
  {
   printf("Se ha detenido porque se introdujeron 10 numeros.\n");
  }
return 0;

}
