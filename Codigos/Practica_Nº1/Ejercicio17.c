#include <stdio.h>

int main()
{
    for(int num=0;num<=100;num++)if(num!=0)if((num%3)==0)printf("Multiplo de 3: %d\n",num);
    for(int num=0;num<=100;num++)if(num!=0)if((num%2)==0)printf("Multiplo de 2: %d\n",num);
    return 0;
}

