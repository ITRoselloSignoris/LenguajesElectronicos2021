#include <stdio.h>
char palabra1[40];
char palabra2[40];
char palabra3[40];
char *pal1=&palabra1;
char *pal2=&palabra2;
char *pal3=&palabra3;
void Mayu(char *);
void Min(char *);
void Intercambiar(char *);

int main()
{
    system("@cls||clear");
    Mayu(pal1);
    Min(pal2);
    Intercambiar(pal3);
    return 0;
}

void Mayu(char *p1){
    printf("Ingrese una palabra en minúscula:\n");
    scanf("%s",palabra1);
    do{
        if(*p1>=97 && *p1<=122){*p1-=32;printf("%c",*p1);}
    *p1++;
    
    }
    while(*p1!='\0');
}
void Min(char *p2){
    printf("\nIngrese una palabra en mayúscula:\n");
    scanf("%s",palabra2);
    do{
        if(*p2>=65 && *p2<=90){*p2+=32;printf("%c",*p2);}
    *p2++;
    
    }
    while(*p2!='\0');
}

void Intercambiar(char *p3){
     printf("\nIngrese una palabra:\n");
    scanf("%s",palabra3);
    do{
        if(*p3>=65 && *p3<=90){*p3+=32;printf("%c",*p3);*p3++;}
        if(*p3>=97 && *p3<=122){*p3-=32;printf("%c",*p3);*p3++;}
    }
    while(*p3!='\0');
}


