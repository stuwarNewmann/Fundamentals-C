// Programa que calcula los primeros 100.000 primos (combina un for para recorrer los números y un do while para encontrar el primer divisor y descartar que es primo.


#include <stdlib.h>

int	main(void)
{
	int totalPrimosEcontrados;
	int total = 100;
	int numeroEstudiar;
	int divisor;
	int encontradoDivisor;

	totalPrimosEcontrados = 0;
	for (numeroEstudiar = 1; numeroEstudiar <= total; numeroEstudiar++)
	{
		divisor = 1;
		encontradoDivisor = 1;
		do 
		{
			if(divisor > 1 && divisor < numeroEstudiar)
				if (numeroEstudiar % divisor == 0)
					encontradoDivisor = 0;
			divisor++;
		} while (encontradoDivisor == 1 && divisor < numeroEstudiar);
		if (encontradoDivisor == 1)
		{
			totalPrimosEcontrados++;
			printf("[%d] Encontrado número primo\n", numeroEstudiar);
		}
		else {}
			
	}
	printf("Total primos encontrados del 1 al %d, = %d\n", total, totalPrimosEcontrados);
	return (0);
}