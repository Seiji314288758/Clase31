/*Victor Seiji Nieto Morita
clase 4 ejercicio 9*/


#include <stdio.h>
#include <math.h>

void main()
{
  int num;
  int suma = 0, media = 0, mayor = 0, menor = 0;

  do
     {
       printf("Dame el numero entero: ");
       scanf("%d", &num);
      }
      
 while(num < 0);
 suma = num;
 mayor = num;
 menor = num;

for(int i = 2; i <= 10; i++)
  {
       do
      {
       printf("Dame el numero entero: ");
       scanf("%d", &num);
      }
      while(num < 0);
    
      suma = suma + num;
      if(num > mayor)
      {
       mayor = num;
      }
      if(num < menor)
      {
        menor = num;
      }
 }
 media = suma / 10;

printf("La suma total de los numeros es: 5%d\n", suma);
printf("El promedio total de los numeros es: %d\n", media);
printf("El numero mayor es: %d\n", mayor);
printf("El numero menor es: %d\n", menor);
  
     
}
