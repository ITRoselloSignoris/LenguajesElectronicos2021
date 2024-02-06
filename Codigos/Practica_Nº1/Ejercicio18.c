#include <stdio.h>
int val, sum;
int main()
{
    scanf("%d",&val);
    for(int x=0;x<val;x++)
    {
        sum=sum+x;
    }
    printf("%d",sum);

    return 0;
}
