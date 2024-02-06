#include <stdio.h>

void func(char *p){
    (*p)++;
    printf("%d \n",*p);
}
int main()
{
    char var=3, var2=7, var3=9;
    func(&var);
    printf("%d \n",var);

    return 0;
}
