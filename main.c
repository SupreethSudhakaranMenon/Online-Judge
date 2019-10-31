#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int a,b,T,i;
    scanf("%lld", &T);
   
    for(i=0;i<T;i++)
    {
    scanf("%lld", &a);
    b=sqrt(a);
    printf("%lld \n", b);
    }
    return 0;
}
