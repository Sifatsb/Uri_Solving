#include<stdio.h>

int main()
{
    int i, n, m, x, y;
    double b, a;

    while(scanf("%d",&n) != EOF)
    {
        x = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&m);
            if(m) x++;
        }
        a = n * 0.666;
        b = a;

        if(x >= b) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }

    return 0;
}
