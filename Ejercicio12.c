/*Victor Seiji Nieto Morita
clase 4 ejercicio 12*/


#include <stdio.h>
int main()
{
  const int NUMERO_SECRETO = 42;
  int intento;
  int contador = 0;
  const int MAX_INTENTOS = 5;
  int adivinado = 0;

  printf("=== ADIVNA EL NUMERO ===\n");
  printf("Adivina el numero secreto entre 1 y 100.\n");
  printf("Tienes un maximo de %d intentos.\n\n", MAX_INTENTOS);

  while (contador < MAX_INTENTOS && adivinado == 0)
      {
      printf("Intento %d: Ingresa un numero: ", contador + 1);
      scanf("%d", &intento);
      contador++;

      if (intento < NUMERO_SECRETO)
        {
         printf("El numero secreto es mayor.\n");
        }    
      else if (intento > NUMERO_SECRETO) 
        {
         printf("El numero secreto es menor.\n");
        }
      else
        {
          adivinado = 1;
        }
      }
   if (adivinado)
    {
     printf("¡Has adivinado el numero %d en %d intentos!\n", NUMERO_SECRETO, contador);
     printf("¡Has ganado!\n");
    }
  else 
    {
     printf("\n No has logrado adivinar el numero en %d intentos.\n", MAX_INTENTOS);
     printf("El numero secreto era: %d\n", NUMERO_SECRETO);
     printf("Perdiste.\n");
    }
return 0;
}
