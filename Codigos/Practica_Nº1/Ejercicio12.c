#include <stdio.h>
int impares;
int main()
{
    for(int i=0;i<100;i++)
    {
        if((i%2)!=0)printf("%d \n",i),impares=impares+1;
    }
printf("Hay %d numeros impares",impares);
    return 0;
}
