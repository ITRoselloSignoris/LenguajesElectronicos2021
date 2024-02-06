#include <stdio.h>
float h,b,superficie;
int main()
{
    printf("Hola, ingrese el valor de la altura y de la base del triangulo para poder calcular su superficie\n");
    while((h<=0)||(b<=0)){
        printf("Ingrese el valor de la altura:\n");
        scanf("%f",&h);
        printf("Ingrese el valor de la base:\n");
        scanf("%f",&b);
        if ((h<=0)||(b<=0))printf("Error, ingrese valores mayores a cero en ambos casos\n");
    }
    superficie=(h*b)/2;
    printf("La superficie del triangulo es %.2f si el valor de la base es %.2f y el valor de la altura %.2f",superficie,b,h);
    return 0;
}


