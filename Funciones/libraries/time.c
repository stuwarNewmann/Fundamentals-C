#include <time.h>
#include <stdlib.h>

int		main(void)
{
	long i;
	long begin;
	long end;
	int hours;
	int minutes;
	int seconds;
	long aux;
	
	i = 0;
	begin = time(NULL);
	while (i < 600)
	{
		system("clear"); // Linux
		//system("cls"); // Windows
		printf("contandor %06d\n", i);
		i++;
	}
	end = time(NULL);
	aux = difftime(end, begin);
	hours = aux / 3600;
	minutes = aux / 60;
	seconds = aux % 60;
	printf("el tiempo transcurrido total es %d seg y equivale a %02d:%02d:%02d", aux, hours, minutes, seconds);
	return 0;
}