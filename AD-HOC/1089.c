#include<stdio.h>

int main()
{
    int v[3], i, j, k, l, n, p, q;

    while(1)
    {
        scanf("%d",&n);

        if(n == 0) break;

        l=0;
        scanf("%d %d",&v[0],&v[1]);

        if(n == 2)
        {
            if(v[0]!=v[1])
            {
                l=2;
            }
        }
        else
        {
            p=v[0];
            q=v[1];

            for(i = 2; i < n; i++)
            {
                scanf("%d",&v[2]);

                if(v[1] > v[0] && v[1] > v[2] || v[1] < v[0] && v[1] < v[2]) l++;

                v[0] = v[1];
                v[1] = v[2];
            }
            if(p > q && p > v[2] || p < q && p < v[2]) l++;

            if(v[2] > v[0] && v[2] > p || v[2] < v[0] && v[2] < p) l++;
        }

        printf("%d\n",l);
    }


    return 0;
}
