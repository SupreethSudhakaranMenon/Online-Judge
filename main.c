#include <stdio.h>
#include <math.h>
int main(void)
{
    long long int a=0,i=0,j=0,b=0,x,y,n;
    scanf("%lld %lld %lld", &n, &x, &y);
    while (n>0)
    {
        a = a + (n%10)*pow(x,i);
        n = n/10;
        i++ ;
    }
    while (a > 0)
    {
        b= b+(a%y)*pow(10,j);
        a = a/y;
        j++;
    }
    printf(" %lld\n", b);
    return 0;
}
