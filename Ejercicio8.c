/*Victor Seiji Nieto Morita
clase 3 ejercicio 8*/

#include <stdio.h>

int main ()
{
  int numero;
  int decena, unidad;
  int suma, pares = 0;

  printf("Ingresa un número entero. ");
  scanf("%d", &numero);

  // Verificar si es de dos cifras (entre 10 y 99 o -99 y -10)
  if ((numero > 9 && numero < 100) || (numero <-9 && numero > -100))
 
  {
   //Tomar el valor absoluto (por si el número es negativo)
   if (numero < 0) 
    {
      numero = -numero;
    }

   //Separar los dígitos
   decena = numero / 10; //División entera → primer dígito
   unidad = numero % 10; //Resta → segundo dígito

   //Calcular suma
   suma = decena + unidad;

   //Contar cuántos dígitos son pares
   if (decena % 2 == 0) pares ++;
   if (unidad % 2 == 0) pares ++;

   //Mostrar los resultados
   printf("a) La suma de los dígitos es: %d\n", suma);
   printf("b) La cantidad de dígitos pares es: %d\n", pares);
  }

  else
  {
   printf("El número no es de dos cifras.\n");
  }

  return 0;
}
