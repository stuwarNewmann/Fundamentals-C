#include <unistd.h>

int power (int base, int n);

int	main (void)
{
	int n;
	n = 3;
	printf("n = %d El resultado de la potencia = %d\n", n, power(5,n));
	printf("El Valor original de n sigue siendo: = %d\n", n);
	return (0);
};

int power(int base, int n)
{
	int p;
	for (p = 1; n > 0; n--)
	{
		p = p * base;
		printf("el valor temporal de n es: %d\n",n);
	}
	return p;
}
