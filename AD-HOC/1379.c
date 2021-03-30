#include<stdio.h>

int main()
{
    long long int a, b, c;

    while(scanf("%lld %lld",&a, &b) && a != 0 && b != 0)
    {
        c = a - (b - a);
        printf("%lld\n",c);
    }
    return 0;
}
