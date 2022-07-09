#include <stdio.h>
#include <math.h>
//Rama student
int x;
int name;
float result;

int main()
{
    printf("Ingrese el valor de x: \n");
    scanf("%d", &x); // Recibe un valor de entrada, asignamos el valor a la variable x
    //el operador de asignacion es &;    
    

    printf("Ingrese su nombre: \n");
    scanf("%d", &name);
    printf("Hola %d:  \n", name);
    printf("Hola: %d \n", name);


    printf("\n");

    result = sin(x);//Funcion del seno
    printf("El valor ingresado es: %d \n", x);
    printf("El valor del sin de x es: %f \n", result);

    return 0;
}