#include <stdio.h>
float tmp_promedio,tmp,tmp1,tmp_max,tmp_min;
int tmpx,times,val;

int main()
{
    do{
        printf("Ingrese una temperatura:\n");
        scanf("%f",&tmp);
        times+=1;
        tmp1+=tmp;
        
        if((tmp>10)&&(tmp<20))tmpx+=1;
        if(tmp>tmp_max)tmp_max=tmp;
        if(tmp_min==0)tmp_min=tmp;
        else if(tmp<tmp_min)tmp_min=tmp;
        
        printf("¿Quiere continuar con el programa? Si=0 No=1\n");
        scanf("%i",&val);
    }
    while(val!=1);
    
    tmp_promedio=tmp1/times;
    printf("El valor de la temperatura maxima es %.2f grados y el valor de la temperatura minima es %.2f grados.\n",tmp_max,tmp_min);
    printf("El promedio es de %.2f grados.\n",tmp_promedio);
    if(tmpx==1){
        printf("Se ingreso un solo valor que se encuentra entre 10 grados y 20 grados.");
    }
    else{
        printf("Se ingresaron valores entre 10 grados y 20 grados %i veces.",tmpx);
    }
    return 0;
}






