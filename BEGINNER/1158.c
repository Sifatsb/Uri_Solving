#include<stdio.h>

int main()
{
    int i, j, N, x, y, sum, count;

    scanf("%d",&N);

    for(i = 1; i <= N; i++)
    {
        sum = 0;
        count = 0;
        scanf("%d %d",&x, &y);

        for(j = x; ; j++)
        {
            if(j % 2 != 0)
            {
                sum = sum + j;
                count++;
            }
            if(count == y)
                {
                    break;
                }

        }

            printf("%d\n",sum);
    }

    return 0;
}
