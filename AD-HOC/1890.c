#include<stdio.h>
int main()
{
    int a, n, m, t, i;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n, &m);
        if(n == 0 && m == 0) printf("0\n");

        else
        {
            long long int r = 1;
            while(n)
            {
                r *= 26;
                --n;
            }
            while(m)
            {
                r *= 10;
                --m;
            }

            printf("%lld\n",r);
        }
    }

    return 0;
}
