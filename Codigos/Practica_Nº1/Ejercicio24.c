#include <stdio.h>
#include <math.h>
float ang,modu,rea1,rea2,img1,img2,rad,img,rea;
int val;
int main()
{
    rad=180/M_PI;
    rea1=-3;
    rea2=-4;
    printf("Ingrese el valor real correspondiente al primer numero complejo\n");
    while(rea1<0){
        scanf("%f",&rea1);
    }
        if(rea1<0)printf("El valor real tiene que ser positivo\n");
    printf("Ingrese el valor imaginario correspondiente al primer numero complejo\n");
    scanf("%f",&img1);
    printf("Ingrese el valor real correspondiente al segundo numero complejo\n");
    while(rea2<0){
        scanf("%f",&rea2);
    }
        if(rea2<0)printf("El valor real tiene que ser positivo\n");
    printf("Ingrese el valor imaginario correspondiente al segundo numero complejo\n");
    scanf("%f",&img2);
    rea=rea1+rea2;
    img=img1+img2;
    printf("Como desea mostrar el valor? Binomial=0 Polar=Cualquier otro valor\n");
    scanf("%i",&val);
    if(val==0)printf("%.2f+%.2fj",rea,img);
        else{
            modu=sqrt((img*img)+(rea*rea));
            ang=atan(img/rea)*rad;
            printf("El modulo es %.2f y el angulo es %.2f",modu,ang);
    }
    return 0;
}
