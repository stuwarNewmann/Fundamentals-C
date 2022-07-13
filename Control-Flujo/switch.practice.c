 #include <stdio.h>


int main() 
{
    int categoria;
    int plato;

    printf("Buenos dias, bienvenido al menu de Luis'Restaurant\n");
    printf("Dime, prefieres comida Colombiana o Peruana\n");
    scanf("%i",&categoria);

    switch (categoria)
    {
    case 1:
        printf("Tenemos los siguientes platos");
        printf("Plato 1");
        printf("Plato 2");
        printf("Plato 3");
        scanf("%i", &plato);
        switch (plato)
        {
            case 1:
                printf("Usted escogio el plato 1");
                break;
        
            default:
                break;
        }
        break;
    
    default:
        break;
    }


    return 0;
}