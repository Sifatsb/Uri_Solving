#include<stdio.h>

int main()
{
    int m, n, i, temp, sum;

    //while(scanf("%d %d",&m, &n))
    for(; ;)
    {
        sum = 0;
        scanf("%d %d",&m, &n);
        if(m < 0 || m == 0 || n < 0 || n == 0)
        {
            break;
        }
        if(m > n)
        {
           temp = m;
           m = n;
           n = temp;
        }
        for(i = m; i <= n; i++)
        {
            sum = sum + i;

        printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
    }

    return 0;
}
