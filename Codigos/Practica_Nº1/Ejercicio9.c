#include <stdio.h>
float cm,inch,pies;
int main()
{
    printf("Hola, ingresa la cantidad de cm:\n");
    while(cm<=0)
    {
        scanf("%f",&cm);
        if(cm<=0)
        {
            printf("Error, ingrese un valor mayor a cero");
        }
    }
inch=cm/2.54;
pies=inch/12;
printf("%.3f cm son %.3f pies y %.3f pulgadas",cm,pies,inch);
    return 0;
}


