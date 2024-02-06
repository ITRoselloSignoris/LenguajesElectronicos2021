#include <stdio.h>
#include <math.h>
float real,hrz,img,resistencia,capacitor,inductor;
int main()
{
    real=-1;
    printf("Hola, ingrese el valor de la parte real:\n");
    while(real<0){
        scanf("%f",&real);
        if(real<0)printf("Ingrese un valor positivo:\n");
    }
    printf("Ingrese el valor de la parte imaginaria:\n");
    scanf("%f",&img);
    printf("Ingrese la frecuencia de trabajo:\n");
    while(hrz<=0){
        scanf("%f",&hrz);
        if(hrz<=0)printf("Ingrese un valor mayor a cero:\n");
    }
    if(real==0){
        resistencia=0;
        if(img==0)printf("El valor de la resistencia es %.2f,por lo tanto no hay un resistor, y no hay un capacitor o inductor porque el valor imaginario es %.2f",resistencia,img);
        else if(img<0){
                capacitor=1/(hrz*img);
                printf("El valor de la resistencia es %.2f por lo tanto no hay una resistencia en la impedancia y el valor del capacitor es %.4f",resistencia,capacitor);
        }
        else{
            inductor=img/hrz;
            printf("El valor de la resistencia es %.2f por lo tanto no hay una resistencia en la impedancia y el valor del inductor es %.4f",resistencia,inductor);
        }
    }
    else{
        resistencia=real;
        if(img==0)printf("El valor de la resistencia es %.2f y este circuito no posee capacitores o inductores debido a que el valor imaginario es %.2f",resistencia,img);
        else if(img<0){
            capacitor=1/(hrz*img);
            printf("El valor de la resistencia es %.2f y el valor del capacitor es %.4f",resistencia,capacitor);
        }
        else{
            inductor=img/hrz;
            printf("El valor de la resistencia es %.2f y el valor del inductor es %.4f",resistencia,inductor);
        }
    }
    return 0;
}


