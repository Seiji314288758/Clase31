/*Victor Seiji Nieto Morita
clase 4 ejercicio 6*/

#include <stdio.h>

int main()
{
  int numero;
  int contador = 0;
  int suma = 0;

  do 
    {
      printf("Ingresa un numero: ");
      scanf("%d", &numero);
     
    if (numero != 0)
     {
      printf("Ingresaste el numero %d\n", numero);
      contador++;
      suma+= numero;
     }
   else
     {
      printf("\nFinalizando: Se ha introducido el número 0\n");
     }  
    }
    while (numero!= 0);

  printf("\nTotal de números introducidos: %d\n", contador);
  printf("Suma total de los números: %d\n", suma);

  return 0;

}



  
  
}
