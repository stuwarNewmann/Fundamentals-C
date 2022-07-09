#include <stdio.h>
#include <stdlib.h>

int opt;
int drink;
int eat;

int main()
{
    printf("Buenos dias, bienvenido al menu de Daniel'Restaurant\n");
    printf("Dime, prefieres beber o comer algo\n");
    printf("1 = Beber\n");
    printf("2 = Comer\n");
    scanf("%i",&opt);
    if (opt == 1){
            printf("Perfecto, bebamos entonces \n");
            printf("Tenemos estos refrescos para que puedas elegir \n");
            printf("1 = CocaCola Zero\n");
            printf("2 = Cerveza\n");
            printf("3 = Agua\n");
            scanf("%i",&drink);
            if (drink == 1)
                printf("Genial, elegiste Coca Cola Zero, te estas cuidando \n");

            else if (drink == 2)
                printf("Una cerveza?, estas seguro que sera solo una jajajaja no te creo \n");

            else if (drink == 3)
                printf("Aguita, que rico, obviamente que no sera de la llave");

            else
                printf("Creo que no elegiste ninguna de las opciones");

            }
    else if (opt == 2){
            printf("Genial, me soltare el cinturon entonces\n");
            printf("Tenemos estos deliciosos platos para ti \n");
            printf("1 = Congrio\n");
            printf("2 = Cazuela\n");
            printf("3 = Tallarines con salsa roja\n");
            scanf("%i",&eat);
            if (eat == 1)
                printf("Mmmmmm se me hace agua la boca, el dia esta para un congrio\n");
            else if (eat == 2)
                printf("Una cazuelita, la especialidad de la casa\n");
            else if (eat == 3)
                printf("La fieja confiable, los infantables tallarines con salsa");
            else
                printf("Creo que no elegiste ninguna de las opciones");

            }

    else {
            printf("Entonces a que vienes? o esto es una camara indiscreta");
            }

    return 0;
};