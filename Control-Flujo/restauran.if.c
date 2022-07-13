 #include <stdio.h>

int main() 
{
    int categoria;
    int plato;

    printf("Buenos dias, bienvenido al menu de Luis'Restaurant\n");
    printf("Dime, prefieres comida Colombiana o Peruana\n");
    scanf("%i",&categoria);

    if(categoria == 1)
    {
        printf("Tenemos los siguientes platos");
        printf("Plato 1");
        printf("Plato 2");
        printf("Plato 3");
        scanf("%i", &plato);

        if(plato == 1){
            printf("Usted escogio el plato 1");
        }
        else if(plato == 2)
        {
            printf("Usted escogio el plato 2");  
        }
        else if(plato == 3)
        {
            printf("Usted escogio el plato 3");  
        }
        else 
        {
            printf("Usted no escogio ningun plato");
        }

    }
}