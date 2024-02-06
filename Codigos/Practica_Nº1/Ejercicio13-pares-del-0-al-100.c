#include <stdio.h>
int pares;
int main()
{
    for(int i=1;i<=100;i++)if((i%2)==0) printf("%d \n",i),pares+=1;
    return 0;
}

