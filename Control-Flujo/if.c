#include <stdio.h>

//Varible Inicialitation
int n = 19;

int main()
{
    if(n > 10 && n < 20)
        printf("Aumente la temperatura\n");
    else if(n == 10)
        printf("El numero es 10\n");
    else if(n > 20)
        printf("El numero es mayor que 20\n");
    else if(n < 10)
        printf("El numero es menor que 10\n");
    else
        printf("error no hay numero\n");

    return 0;
    
};