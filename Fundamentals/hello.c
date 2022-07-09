#include <stdio.h>

int main()
{
    printf("Hello, Student!");
    return 0;
};

Basic Types: 
Aritmeticos:
    (A) Valores enteros:

        char 1 Byte -128 to 127
        unsigned char 0 to 255

        int 2 o 4 Bytes dependiendo del compilador: -32.768 to 32.767 or  -2.147.483.648 to 2.147.483.648.
        unsigned int usaremos este tipo de datos para cuando no necesitemos numeros negativos en nuestro programa: 0 to 65.535 or 0 to 4.294.967.295.
        Por eso siempre antes de lanzarte al codigo, debes hacer los calculos de cuales seran los minimos y los maximos en tu programa.

        Short 2 Bytes: -32.768 to 32.767
        unsigned short 2 Bytes: 0 to 65.535 

        long es una varable que nos permite almacenar tipos de datos grandes
        -9223372036854775808 to 9223372036854775807
        unsigned long 8 Bytes 0 to 18446744073709551615


(B) De punto flotante float:
        float 4 Bytes 1.2E-38 to 3.4E+386 ( 6 decimal places)
        
        double 8 Bytes 2.3E-308 to1.7E+30815 (15 decimal places)
                            
        long double 10 Bytes 3.4E-4932 to 1.1E+493219 (19 decimal places)    



void: Expecifica que no hay valor disponible.
    1- Una funcion retorna un tipo de datos void.
        void funcion()
    2- Una funcion tiene argumentos de tipo void
        int rand(void)
    3- Puntero o apuntador. Va a la dirección de un objeto pero no le importa el tipo de dato que tenga el objeto.


variables: es el nombre que recibe un espacio recerbado en memoria para guardar nuestra informacion, en (C) las variables son fuertemente tipadas.
