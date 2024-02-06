#include <stdio.h>
int dia,tra;
int main()
{
    while(tra==0)
    {
        printf("Ingresa un numero correspondiente al dia de la semana\n");
        scanf("%d",&dia);
        switch(dia){
            case 1:printf("Lunes\n");break;
            case 2:printf("Martes\n");break;
            case 3:printf("Miercoles\n");break;
            case 4:printf("Jueves\n");break;
            case 5:printf("Viernes\n");break;
            case 6:printf("Sabado\n");break;
            case 7:printf("Domingo\n");break;
            default:printf("Ingresar un valor correspondiente a un dia de la semana\n");
            }
            printf("¿Quiere continuar trabajando? Si=0 No=Cualquier otro valor\n");
            scanf("%d",&tra);
    }
    

    return 0;
}

