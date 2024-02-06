#include <stdio.h>
float tmp_promedio,tmp[100],tmp1,tmp_max,tmp_min;
int tmpx,times,val;

int main()
{
    int i=1;
    do{
        printf("Ingrese una temperatura:\n");
        scanf("%f",&tmp[i]);
        if(tmp[i]>tmp_max)tmp_max=tmp[i];
        if((tmp[i]>10)&&(tmp[i]<20))tmpx+=1;
        if(tmp_min==0)tmp_min=tmp[i];
        else if(tmp[i]<tmp_min)tmp_min=tmp[i];
        tmp1+=tmp[i];
        times+=1;
        tmp[i]++;
        printf("¿Quiere continuar con el programa? Si=1 No=0\n");
        scanf("%i",&val); 
        
    }
    while(val!=0);
    tmp_promedio=tmp1/times;
    printf("El valor de la temperatura maxima es %.2f grados\n",tmp_max);
    printf("El valor de la temperatura minima es %.2f grados\n",tmp_min);
    printf("El promedio es de %.2f grados.\n",tmp_promedio);
    if(tmpx==1){
        printf("Se ingreso un solo valor que se encuentra entre 10 grados y 20 grados.");
    }
    else{
        printf("Se ingresaron valores entre 10 grados y 20 grados %i veces.",tmpx);
    }
    return 0;
}






