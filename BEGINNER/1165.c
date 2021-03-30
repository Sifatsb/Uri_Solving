#include<stdio.h>

int main()
{
    int t, x, i, j, a;
    scanf("%d",&t);

    for(i = 1; i <= t; i++)
    {
        a = 0;
        scanf("%d",&x);

        for(j = 2; j < x; j++)
        {
            if(x % j == 0)
            {
                a = 1;
                break;
            }
            else
            {
                a = 2;
            }
        }
        if(a == 1)
        {
            printf("%d nao eh primo\n",x);
        }
        else
        {
            printf("%d eh primo\n",x);
        }
    }

    return 0;
}
