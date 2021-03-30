#include<stdio.h>
int main()
{
    int i, j, n, x, y, a, d, t;
    while(1)
    {
        scanf("%d %d",&x, &y);

        if(x==0 && y==0)break;
        int a[x],d[y];

        for(i = 0; i < x; i++)scanf("%d",&a[i]);
        for(i = 0; i < y; i++)scanf("%d",&d[i]);
        for(i = 0, n = 1; i < x; i++)
        {
            for(j = n; j < x; j++)
            {
                if(a[j] < a[i])
                {
                    t = a[j];
                    a[j] = a[i];
                    a[i] = t;
                }
            }
            n++;
        }
        for(i = 0, n = 1; i < y ; i++)
        {
            for(j = n; j < y; j++)
            {
                if(d[j] < d[i])
                {
                    t = d[j];
                    d[j] = d[i];
                    d[i] = t;
                }
            }
            n++;
        }
        if(a[0] < d[0] || a[0] < d[1])printf("Y\n");

        else printf("N\n");
    }
    return 0;
}
