#include<stdio.h>

int main(void)

{
    long long int N,A;
    scanf("%lld", &N);
    A=2*(N-1);
    
    if (N==1)
    {
        printf("1 \n");
    }
    else
    {
        printf("%lld \n", A);
    }

    return 0;
}


