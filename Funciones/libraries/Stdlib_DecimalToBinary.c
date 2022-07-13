#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	long number;
	int binaryNumber[12];
	int i;
	
	i = 0;
	printf("Introduzca un valor\n");
	scanf("%d", &number);

	while (i++ < 12)
		binaryNumber[i] = 2;

	i = 0;
	while (number >= 0)
	{
		if(i < 12)
			binaryNumber[i] = number % 2;
		number = number / 2;
		if(number == 0)
			number--;
		i++;
	}
	printf("el número binario es: ");
	if(i > 12)
		i = 12;
	while (i-- > 0)
		if (binaryNumber[i] != 2)
			printf("%d", binaryNumber[i]);
	printf("\n");
}