#include <stdio.h>
int val;

int main()
{
    printf("Hola, a continuación ingrese un valor:\n");
    scanf("%i",&val);
    val=val%2;
if(val==0)
{
    printf("El numero ingresado es par");
}
else
{
    printf("El numero ingresado es impar");
}
    return 0;
}
