#include <stdio.h>
int val;
int main()
{
    printf("Ingrese un valor: \n");
    scanf("%d",&val);
    for(int x=0;x<=val;x++)
    {
     printf("%d\n",x);
    }

    return 0;
}
