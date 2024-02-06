#include <stdio.h>
int main()
{
    int val,Square;
    printf("Hola, ingrese el número que quiere calcular:\n");
    scanf("%d",&val);
    if(val<0){
    printf("ERROR, el número ingresado debe ser mayor a 0");
    }
    else{
       Square=val*val;
       printf("El cuadrado del número ingresado es igual a %d", Square);
    }
    return 0;
}


