#include<stdio.h>

int main()
{
    int i, n, T;
    long long int t[61];
    t[0] = 0, t[1] = 1;

    for(i = 2; i <= 60; i++)
    {
        t[i] = t[0] + t[1];
        t[0] = t[1];
        t[1] = t[i];
    }
    t[0] = 0, t[1] = 1;

    scanf("%d",&T);
    for(i = 0; i < T; i++)
    {
        scanf("%d",&n);
        if( 0 <= n && n <= 60)
        {
            printf("Fib(%d) = %lld\n",n,t[n]);
        }
    }

    return 0;
}

