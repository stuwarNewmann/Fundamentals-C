#include <stdio.h>

int opt1 = 2;
int opt2 = 1;

int	main (void)
{
	// este programa genera menus de carreras
	printf("Bienvenido al menu de carreras\n");
	printf("1) Desarrollo e ingeniería\n");
	printf("2) Diseño y UX\n");
	printf("3) Marketing\n");
	printf("4) Producción audiovisual\n");
	switch (opt1)
	{
	case 1:
		printf("usted eligió la carrera de desarrollo e ingeniería\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Seguridad Informática\n");
		printf("2) Base de datos\n");
		printf("3) Fundamentos de programación\n");
		printf("4) Inteligencia Artificial y Matching Learnig\n");
		switch (opt2)
		{
		case 1:
			printf("usted eligió el curso de seguridad informática\n");
			break;
		case 2:
			printf("usted eligió el curso de base de datos\n");
			break;
		case 3:
			printf("usted eligió el curso de fundamentos de programación\n");
			break;
		case 4:
			printf("usted eligió el curso de inteligencia artificial y matching learnig\n");
			break;
		default:
			printf("opción invalida\n");
			break;
		}
		break;
	case 2:
		printf("usted eligió la carrera de diseño y UX\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Diseño gráfico\n");
		printf("2) Diseño de experiencia de usuario\n");
		printf("3) Diseño de interfaces\n");
		switch (opt2)
		{
		case 1:
			printf("usted eligió el curso de diseño gráfico\n");
			break;
		case 2:
			printf("usted eligió el curso de diseño de experiencia de usuario\n");
			break;
		case 3:
			printf("usted eligió el curso de diseño de interfaces\n");
			break;
		default:
			printf("opción invalida\n");
			break;
		}
		break;
	case 3:
		printf("usted eligió la carrera de marketing\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Marketing Digital\n");
		printf("2) Marketing y Ventas\n");
		printf("3) Inbound Marketing\n");
		printf("4) Outbound Marketing\n");
		switch(opt2)
		{
		case 1:
			printf("usted eligió el curso de marketing digital\n");
			break;
		case 2:
			printf("usted eligió el curso de marketing y venta\n");
			break;
		case 3:
			printf("usted eligió el curso de inbound marketing\n");
			break;
		case 4:
			printf("usted eligió el curso de outbound marketing\n");
			break;
		default: 
			printf("opción invalida\n");		
			break;
		}
		break;
	case 4:
		printf("usted eligió la carrera de Producción audiovisual\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Producción audiovisual\n");
		printf("2) Periodismo digital\n");
		switch (opt2)
		{
		case 1:
			printf("usted eligió el curso de producción audiovisual\n");
			break;
		case 2:
			printf("usted eligió el curso de periodismo digital\n");
			break;
		default: 
			printf("opción invalida\n");
			break;
		}
		break;
	default:
		printf("opción invalida\n");
		break;
	}
	return (0);
};