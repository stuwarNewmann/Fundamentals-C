#include <stdio.h>

//('nuestras variables pueden estar inicializadas')
//('Las variables en C deben declararse antes de ser usadas, ademas que deben ser declaradas //con una letra o _ al iniciar.');
int i,j, k;
unsigned int _minutosEstacionado = 30;

char y = 'y';
unsigned char dailyWorkedHours = 8;
unsigned char dailyWorkedHours; // = 0;

//Advanced Variable Declarations
extern int a;
//Variable Declarations
int j, b, c;
float f, g, h;




int main()
{
    //Variable Definition
    int a;
    //Variable Initializations
    j = 10;
    b = 20;

    c = a + b;
    printf("Value of sum is: %d\n", c);

    //Variable Initializations Floating Point
    // g = -100000000;
    // f = -234389573;
    g = 1000.9999;
    f = -234389573.123343;
    h = g + f;
    printf("Value of sum is: %f\n", h);
    return 0;


    //Para tener en cuenta se no te va a informar cuando tus variables hayan superado su tamaño al iniciar, por lo que podriamos tener una perdida de precicion o cracheo del programa.


}
