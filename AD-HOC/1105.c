#include<stdio.h>
int main()
{
    int n, m, d, c, v, i, j, k, t;
    while(1)
    {
        scanf("%d %d",&n, &m);
        if(n == 0 && m == 0) break;

        int arr[n];
        t = 0;

        for(i = 1; i <= n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i = 1; i <= m; i++)
        {
            scanf("%d %d %d",&d, &c, &v);
            arr[d] -= v;
            arr[c] += v;

        }
        for(i = 1; i <= n; i++)
        {
            if(arr[i] < 0)
            {
                t = 2;
                break;
            }
        }
        if(t == 2) printf("N\n");

        else printf("S\n");
    }


    return 0;
}
