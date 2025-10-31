/*Victor Seiji Nieto Morita
clase 4 ejercicio 11*/

#include <stdio.h>
int main()
{
  const int NUMERO_SECRETO = 42;
  int intento;
  int contador = 0;

  printf("=== JUEGO: ADIVINA EL NUMERO ===\n");
  printf("Adivina el numero secreto entre 1 y 100.\n\n");

  do
    {
     printf("Introduce unn numero: ");
     scanf("%d", &intento);
     contador++;

     if (intento < NUMERO_SECRETO)
       {
        printf("El numero es mayor.\n");
       }
     else if (intento > NUMERO_SECRETO) 
       {
        printf("El numero secreto es menor.\n");
       }
     else
       {
        printf("\n¡Correcto! Has adivinado el numero.\n");
       }
    } 
  while (intento != NUMERO_SECRETO);
    printf("\nHas necesitado %d intentos.\n", contador);
  if (contador < 5)
     {
      printf("¡Enhorabuena!\n");
     }
  else if (contador <= 10)
     {
      printf("No esta mal.\n");
     }
  else
     {
      printf("Debe practicar mas.\n");
     }
return 0;
}
