#include <stdio.h>
#include <math.h>
float rad,ang,Rea,Img,modu;
int main()
{
    printf("Hola, ingresa el modulo\n");
    scanf("%f",&modu);
    printf("Ingresa el angulo\n");
    scanf("%f",&ang);
    rad=180/M_PI;
    Rea= cos(ang*rad)*modu;
    Img= sin(ang*rad)*modu;
    printf("El valor real es %.2f y el imaginario %.2f si el modulo es %.2f y el angulo es %.2f",Rea,Img,modu,ang);

    return 0;
}

