#include<stdio.h>

int main()
{
    long long int a,b,c,d,e;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    e = ((a / b) * d) + (a * c);
    printf("%lld\n",e);

    return 0;
}

