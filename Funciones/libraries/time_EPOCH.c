#include <time.h>
#include <stdlib.h>


time_t hoy;
int days,hrs,min,sec;

int	main(void)
{

hoy = time(NULL);
printf("EPOCH es igual a %ld segundos \n", hoy);

days = hoy/86400;
hrs = (hoy % 86400) / 3600;
min = ((hoy % 86400) % 3600) / 60;
sec = ((hoy % 86400) % 3600) % 60;

printf("Desde EPOCH han pasado %d dias, %d horas, %d minutos, %d segundos\n", days, hrs,min,sec);

}