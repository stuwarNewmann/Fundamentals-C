#include <stdio.h>

int main(int argc, const char* argv[])
{
    int nAdvertencias = 0;

    restart:

        if(nAdvertencias == 3)
            goto errorHandler;

        int count=1000;

        for (size_t i = 0; i < count; i++)
        {
            for (size_t j = 0; j < count; j++)
            {
                for (size_t k = 0; k < count; k++)
                {
                    if (k>100)
                    {
                        printf("\nHas sobrepasado el numero de iteraciones permitidas\n");
                        nAdvertencias++;
                        printf("Advertencia: %d\n", nAdvertencias);
                        goto restart;
                    }
                }
            }
            printf("%d\n", i);
        }

        return 0;

    errorHandler: //todo el codigo para componer tu desastre
        printf("\nHas sobrepasado 3 veces el numero de iteraciones permitidas");

    return 0;
}