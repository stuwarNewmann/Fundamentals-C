#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main (void)
{
	int numero;
	int numeroPensado;
	int intentosGameOne;
	char nombre[10] = "";
	long i = time(NULL);

	numeroPensado = i % 11 + 1;
	intentosGameOne = 0;

	

	printf("Bienvenido a el juego del numero secreto\n");
	printf("Ingrese su nombre: ");
	scanf("%s", nombre);
	printf("Hola %s.", nombre);

	printf ("He pensado un número del 1 al 10\n");
	do
	{
		intentosGameOne++;
		printf ("¿cual dirás que es?\n");
		scanf("%d", &numero);
		if (numero < numeroPensado)
			printf ("Mi número pensado es mayor que %d\n", numero);
		else if (numero > numeroPensado)
			printf ("Mi número pensado es menor que %d\n", numero);
	} while (numero != numeroPensado );
	printf ("¡Enhorabuena! mi numero %d adivinado en %d intentos\n", numeroPensado, intentosGameOne);
}