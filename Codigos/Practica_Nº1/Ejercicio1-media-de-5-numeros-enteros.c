#include <stdio.h>
int Media,Sum,val;
int main (void){
    printf("Hola, ingresa 5 valores enteros:\n");
    for (int X=0; X<5; X++){
        scanf("%d",&val);
        Sum+=val;
    }
    Media=Sum/5;
    printf("El valor de la media es: %d",Media);
    return 0;
}

