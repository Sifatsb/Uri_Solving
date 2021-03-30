#include<stdio.h>

int main()
{
    int tc, i;
    long long int n, m;
    char name1[100], name2[100], par[10], impar[10];
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%s %s %s %s",name1, par, name2, impar);
        scanf("%lld %lld",&n, &m);
        if(par[0] == 'I')
        {
            if((m + n) % 2 == 0)
            {
                printf("%s\n",name2);
            }
            else
            {
                printf("%s\n",name1);
            }
        }
        else
        {
            if((m + n) %2 == 0)
            {
                printf("%s\n",name1);
            }
            else
            {
                printf("%s\n",name2);
            }
        }
    }

    return 0;
}
