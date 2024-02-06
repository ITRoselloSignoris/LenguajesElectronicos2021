#include <stdio.h>
int val, sum;
int main(){
    printf("Ingrese un valor:\n");
    scanf("%d",&val);
    for(int x=1;x<val;x++){
        if((x%3)==0)
            sum=sum+1;
    }
    printf("%d",sum);
    return 0;
}
