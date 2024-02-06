#include <stdio.h>
int val, pro, sum;
int main()
{
    printf("Hola, a continuación ingrese 10 valores\n");
    for(int i=0;i<10;i++){
        val=0;
        while(val==0){
            scanf("%i",&val);
            if(val==0){
                printf("No se pueden ingresar valores iguales a cero\n");
            }
            else{
                if(val>0)sum=sum+val;
                else{
                    pro=(pro==0)?val:val*pro;
                }
            }
        }
    }
    printf("El resultado de la suma de los positivos es %i y el resultado del producto de los negativos es %i",sum,pro);
    return 0;
}

