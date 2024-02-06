
#include <stdio.h>
int val;

int main()
{
    printf("Hola, a continuación ingrese un valor: \n");
    scanf("%d",&val);
    if (val!=0){
        if (val<0)printf("El numero ingresado es negativo");
        else printf("El numero ingresado es positivo");
    }
    else printf("El numero ingresado es cero");    

    return 0;
}


