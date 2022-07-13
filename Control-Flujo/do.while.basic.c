// While = Pregunta luego dispara (si es necesario)
// Do While = Te pega al menos un tiro, y luego si te pregunta

#include <stdio.h>
int n = 10;

int main()
{
    do {
        printf("n es igual a %d\n", n);
        n = n-1;
    } while (n>10);

    printf("hemos salido del bucle porque n es igual o menor que 10. ");
    return 0;
}

