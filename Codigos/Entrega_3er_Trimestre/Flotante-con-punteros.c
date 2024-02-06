#include <stdio.h>

int main()
{
    system("@cls||clear");
    float var=5.5;
    unsigned char *p =&var;
    for(char i=0;i<4;i++)printf("0x%X\n",*(p++));

    return 0;
}





