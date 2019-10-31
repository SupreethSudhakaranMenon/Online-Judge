#include<stdio.h>
#include<math.h>

int main (void)
{
    long long int x,y,z,b,a,f = 0,s,i,count=0;
    scanf("%lld %lld %lld", &x , &y, &z);
    
    for(b=x;b<=y;b++)
    {
        s=sqrt(b);
        a=0;
        {
        if (s*s == b)
            {
                for (i=1;i<s;i++)
                    {
                        if(b%i==0)
                        a++;
                        f = a*2 + 1;
                    }
            }
        else
                for (i=1;i<=s;i++)
                    {
                        if(b%i==0)
                        a++;
                        f = a*2;
                    }
        }
    if (f<=z)
            {
                count++;
            }
    }
    printf("%lld\n ", count);
    return 0;
}
