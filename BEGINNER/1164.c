#include<stdio.h>

int main()
{
    int N, i, x, j, sum;

    scanf("%d",&N);

    for(i = 1; i <= N; i++)
    {
        sum = 0;
        scanf("%d",&x);
        for(j = 1; j < x; j++)
        {
            if(x % j == 0)
            {
                sum = sum +j;
            }
        }
        if( sum == x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
    }

    return 0;
}
