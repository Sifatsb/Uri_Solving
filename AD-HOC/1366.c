#include<stdio.h>

int main()
{
    int n, a, b, i, j, r;

    while(scanf("%d",&n))
    {
        if(n == 0)break;
        r = 0;

        for(i = 0; i < n; i++)
        {
            scanf("%d %d",&a, &b);
            {
                r += b / 2;
            }
        }
        printf("%d\n",r/2);

    }

    return 0;
}
