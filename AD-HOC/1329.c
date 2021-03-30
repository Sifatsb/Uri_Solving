#include<stdio.h>

int main()
{
    int tc, n, i, m = 0, j = 0;

    while(scanf("%d",&tc) != 0)
    {
        if(tc == 0)
        {
            break;
        }
        for(i = 1; i <= tc; i++)
        {
            scanf("%d",&n);
            if(n == 0)
            {
                m++;
            }
            else
            {
                j++;
            }
        }
        printf("Mary won %d times and John won %d times\n",m, j);
        m = 0, j = 0;
    }

    return 0;
}
