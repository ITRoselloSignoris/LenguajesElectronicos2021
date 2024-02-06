#include <stdio.h>

void val_imc(void);
void imc(void);
void func(char *);

struct alumnos{
    char nombre[20],apellido[20],mail[40];
    int DNI,edad,telefono;
    float peso, altura;
}Alumno1;

char gmail[]="@gmail.com"; char * punteroVeriEmail = &gmail;

int main()
{
    val_imc();
    imc();
    return 0;
}
 void val_imc(){
    system("@cls||clear");
    printf("Ingrese su DNI:\n");
    scanf("%i",&Alumno1.DNI);
    printf("Ingrese su edad:\n");
    scanf("%i",&Alumno1.edad);
    printf("Ingrese su telefono:\n");
    scanf("%i",&Alumno1.telefono);
    printf("Ingrese su altura en metros:\n");
    scanf("%f",&Alumno1.altura);
    printf("Ingrese su peso en kilogramos:\n");
    scanf("%f",&Alumno1.peso);
    printf("Ingrese su nombre:\n");
        scanf("%s",&Alumno1.nombre);
    printf("Ingrese su apellido:\n");
        scanf("%s",&Alumno1.apellido);
        func(punteroVeriEmail);
        
    }
 void imc(){
    float metro=Alumno1.altura;
    float val=Alumno1.peso/(metro*metro);
    printf("El valor del Indice de Masa Corporal es:\n%f\n",val);
    if(val<18.5)printf("Usted posee un peso inferior al normal\n");
    else if(val>18.5 && val<24.9)printf("Usted posee un peso normal \n");
    else if(val>25 && val<29.9)printf("Usted posee un peso superior al normal\n");
    else if(val>30)printf("Usted posee obesidad\n");
 }
 
void func(char* p2){
    int veri=0;
    printf("Ingrese un gmail: \n");
    while(veri == 0){
    int cont=0, cont2=0;char * p1=&Alumno1.mail;
    scanf("%s", &Alumno1.mail);
    while(*p1 != '@' && cont2 < 40){p1++;cont2++;}
    while(*p1 == *p2 && *p1 != '\0'){cont++; p1++; p2++;
    }
    if(cont == 10) {printf("Email correcto.\n"); veri++;}
        else {
            printf("Ingrese nuevamente el gmail.\n");
        }
    }
}




