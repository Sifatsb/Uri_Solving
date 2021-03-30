#include<stdio.h>

int main()
{
    double n, sum = 0;
    int count = 0, n2;
    while(1)
    {
        while(scanf("%lf",&n))
        {
            if(n >= 0 && n <= 10)
            {
                sum = sum + n;
                count++;
                if(count == 2)
                {
                    break;
                }
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n",sum / 2);
        count = 0;
        sum = 0;

        while(scanf("%d",&n2))
        {
            printf("novo calculo (1-sim 2-nao)\n");
            if(n2 == 1 || n2 == 2)
            {
                break;
            }
        }
        if(n2 == 1)
        {
            continue;
        }

        else if(n2 == 2)
        {
            break;
        }
    }

    return 0;
}
