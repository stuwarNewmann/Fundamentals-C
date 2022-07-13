#include <stdio.h>

#define TOTAL 3


int	main (void)
{
	int i;
	int j;

	
	i = 1;
	while ( i <= TOTAL)
	{
		printf ("\n\n Tabla del %d\n", i);
		j = 1;
		while (j <= TOTAL)
		{
			printf ("  %d x %d = %d\n", i, j, i*j);
			j++;
		}
		i++;
	}
	return (0);
}