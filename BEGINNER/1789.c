#include<stdio.h>

int main()
{
    int i, t, n, max;

    while(scanf("%d",&t) != EOF)
    {
        max = 0;
        for(i = 1; i <= t; i++)
        {
            scanf("%d",&n);
            if(max < n)
            {
                max = n;
            }
        }
        if(max < 10)printf("1\n");
        else if(max == 10 || max < 20)printf("2\n");
        else if(max == 20 || max > 20)printf("3\n");
    }

    return 0;
}
