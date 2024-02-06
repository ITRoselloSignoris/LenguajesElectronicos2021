#include <stdio.h>
#include<math.h>
float rad, area, perimetro;
int main()
{
    printf("Hola, a continuación introduzca el valor del radio del circulo\n");
 while(rad<=0){
     scanf("%f",&rad);
     if(rad<=0){
         printf("ERROR, ingrese un valor superior a cero\n");
     }
 }
perimetro=2*M_PI*rad;
area=M_PI*rad*rad;
printf("El valor del area es de %.2f y el valor del perimetro es de %.2f si el radio tiene un valor de %.2f",area,perimetro,rad);
    return 0;
}



