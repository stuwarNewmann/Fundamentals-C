#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue; // Cuando i es igual a 5 se termina la iteración y pasa la siguiente.
        }
        printf("\n i = %d", i);
    }
}
