#include <stdio.h>

int main()
{
    int x = 2;
    int y = 8;
    int z;
    z = potencia(x,y);
    printf("%d elevado a la %d es= %d \n", x,y,z);
}

// tipo_de_retorno nombre_de_la_función (lista_de_parámetros) 
    // {
	// cuerpo_de_la_función 
	// return expresión
    // }

int potencia(int x, int y)
{
   int z=1 , i;
   for ( i = 0; i < y; i++)
   {
       z=z*x;
   }
   
   return z;
};