#include <stdio.h>
#include <math.h>

int main (void)
{long long int T,i;
   double C;
    scanf("%lld", &T);
    for(i=0;i<T;i++)
    {
        scanf("%lf", &C);
    double dy,y,x=sqrt(C);
    y = pow(x,2)+sqrt(x)-C;
    dy = 2*x + 1/(2*sqrt(x));
    {
        while (fabs (y) > 0.000001)
        {
            x = x - y/dy;
        y = pow(x,2)+sqrt(x)-C;
        dy = 2*x + 1/(2*sqrt(x));
        }
    }
        printf("%.6lf\n", x);
    }
    return 0;
}
