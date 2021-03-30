#include<stdio.h>

int main()
{
    long long int n, r;
    int i;
    scanf("%lld",&n);
    while(n != 0)
    {
        r = n % 10;
        n = n / 10;
        printf("%lld",r);
    }
    printf("\n");

    return 0;
}
