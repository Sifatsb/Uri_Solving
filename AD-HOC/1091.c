#include<stdio.h>

int main()
{
    int i, j, k, n, m, x, y;
    while(1)
    {
        scanf("%d",&k);

        if(k==0) break;

        scanf("%d %d",&x, &y);

        for(i = 0; i < k; i++)
        {
            scanf("%d %d",&n, &m);

            if(n == x || m == y)printf("divisa\n");

            else if(n > x && m > y)printf("NE\n");

            else if(n < x && m < y)printf("SO\n");

            else if(n > x && m < y)printf("SE\n");

            else if(n < x && m > y)printf("NO\n");
        }
    }

    return 0;
}
