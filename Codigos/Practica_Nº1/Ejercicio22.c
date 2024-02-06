#include <stdio.h>
#include <math.h>
float rea,img,angulo,modulo;
int main()
{
    printf("Hola, ingresa la parte real\n");
    while(rea<=0){
        scanf("%f",&rea);
        if(rea<0)printf("El valor real no puede ser negativo\n");
    }
    printf("Ingrese la parte imaginaria\n");
    scanf("%f",&img);
    angulo= (atan(img/rea))*57.2958;
    modulo=sqrt((img*img) + (rea*rea));
    printf("El modulo es %.2f y el angulo es %.2f cuando la parte real es %.2f y la parte imaginaria es %.2f",modulo,angulo,rea,img);
    return 0;
}
