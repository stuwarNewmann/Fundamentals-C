// Programa que calcula los primeros 100.000 primos (combina un forpara recorrer los números y un do while para encontrar el primer divisor y descartar que es primo. (Utiliza el continuepara cuando no debe imprimir el número como primo.

#include <stdlib.h>

int	main(void)
{
	int totalPrimosEcontrados;
	int total = 100000;
	int numeroEstudiar;
	int divisor;
	
	totalPrimosEcontrados = 0;
	for (numeroEstudiar = 1; numeroEstudiar <= total; numeroEstudiar++)
	{
		divisor = 0;
		do 
		{
			divisor++;
			if(divisor > 1 && divisor < numeroEstudiar)
				if (numeroEstudiar % divisor == 0)
					break;
		} while (divisor < numeroEstudiar);
		if (divisor < numeroEstudiar)
			continue;
//		else 
//			printf("[%d] no es primo\n", numeroEstudiar);
		totalPrimosEcontrados++;
		printf("[%d] Encontrado número primo\n", numeroEstudiar);
	}
	printf("Total primos encontrados del 1 al %d, = %d\n", total, totalPrimosEcontrados);
	return (0);
}