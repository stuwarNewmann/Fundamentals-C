#include <stdio.h>

//programa que muestra los números pares en el rango del 1 al 100

int main(){

  int numero=0;
  int par=0;

  printf("A continuacion los numeros pares que hay en el rango de 1 a 100\n");

  while(numero<=100)
  {
    par=(numero%2);
    if (par==0){
      printf("%d\n",numero);
    }else{
      printf("\n");
    }
    numero++;
  }

  printf("\n");

  return 0;
  
}