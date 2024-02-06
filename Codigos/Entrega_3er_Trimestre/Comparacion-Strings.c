#include <stdio.h>
char palabra1[40]; char palabra2[40]; char * pal1=&palabra1; char * pal2=&palabra2; 
int cont,cont2,cont3;
void palabras(char *,char *);

int main()
{
    system("@cls||clear");
    printf("Ingrese una palabra:\n");
    scanf("%s",&palabra1);
    printf("Ingrese una segunda palabra:\n");
    scanf("%s",&palabra2);
    palabras(pal1,pal2);
    return 0;
}

void palabras(char *p1, char * p2){
    while(*p1!='\0')cont++,p1++;
    while(*p2!='\0')cont2++,p2++;
    p1=palabra1; p2=palabra2;
    while(*p1!='\0' && cont3!=cont){
        if(cont==cont2){
            if(*p1==*p2){
                p1++;p2++;
                cont3++;
            }
            else {printf("Las palabras ingresadas poseen la misma cantidad de caracteres, pero no son iguales"); *p1='\0';}
        }
        else {printf("Las palabras ingresadas no poseen la misma cantidad de caracteres, por lo tanto, no son iguales");  *p1='\0';}

    }
    if(cont3==cont)printf("Las palabras ingresadas son iguales");
}



