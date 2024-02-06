#include <stdio.h>
union flotante{
    float valor;
    unsigned char bytes[4];
}var;

int main(){
    var.valor=5.5;
    printf("0x%X\n",var.bytes[0]);
    printf("0x%X\n",var.bytes[1]);
    printf("0x%X\n",var.bytes[2]);
    printf("0x%X\n",var.bytes[3]);
}

