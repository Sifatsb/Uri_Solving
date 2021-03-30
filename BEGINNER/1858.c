#include<stdio.h>

int main()
{
    int n, t, i, pos, max;

    while(scanf("%d", &n) != EOF)
    {
        t = 20;
        for(i = 1; i <= n; i++)
        {
            scanf("%d",&max);
            if(max < t)
            {
                t = max;
                pos = i;
            }
        }
        printf("%d\n",pos);
        pos = 0;
    }

    return 0;
}
