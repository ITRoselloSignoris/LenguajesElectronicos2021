#include <stdio.h>
int Val, Menores, Mayores;
int main()
{
    printf("Hola, ingrese 10 valores:\n");
    for(int x=0 ; x<10 ;x++){
    scanf("%d", &Val);
    if(Val>=0){
        if(Val!=0){
        Mayores=Mayores+1;
        }
    }else Menores=Menores+1;
}
    printf("De los valores ingresados, %d son mayores a cero y %d son menores a cero", Mayores,Menores);
    return 0;
}


