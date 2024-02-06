
#include <stdio.h>
float celsius, fahrenheit;
int main()
{
    printf("Hola, ingresa el valor de la temperatura en Celsius:\n");
    scanf("%f",&celsius);
    fahrenheit=(1.8*celsius)+32;
    printf("%.3f grados Celsius son %.3f grados Fahrenheit",celsius,fahrenheit);

    return 0;
}

