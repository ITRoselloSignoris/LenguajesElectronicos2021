#include <stdio.h>
#include <math.h>
float real,hrz,img,resistencia,capacitor,inductor,modu_V,ang_V,modu_I,ang_I,modu_Z,ang_Z,rad;
int main()
{
    rad=M_PI/180;
    int lolo;
    printf("Hola, ingrese el modulo de la tension:\n");
    while(modu_V<=0){
        scanf("%f",&modu_V);
        if(modu_V<=0)printf("Ingrese un valor mayor a cero:\n");
    }
    printf("Ingrese el valor del angulo de la tension:\n");
    scanf("%f",&ang_V);
    printf("Hola, ingrese el modulo de la corriente:\n");
    while(modu_I<=0){
        scanf("%f",&modu_I);
        if(modu_I<=0)printf("Ingrese un valor mayor a cero:\n");
    }
    printf("Ingrese el valor del angulo de la corriente:\n");
    scanf("%f",&ang_I);
    printf("Ingrese la frecuencia de trabajo:\n");
    while(hrz<=0)
        scanf("%f",&hrz);
        if(hrz<=0)printf("Ingrese un valor mayor a cero:\n");
    modu_Z=modu_V/modu_I;
    ang_Z=ang_V-ang_I;
    ang_Z*=rad;
    real=cos(ang_Z)*modu_Z;
    img=sin(ang_Z)*modu_Z;
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



