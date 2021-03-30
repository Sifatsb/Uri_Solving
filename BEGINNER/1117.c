#include<stdio.h>

int main()
{
    float n, sum = 0;
    int count = 0;

    while(scanf("%f",&n))
    {
        if(n >= 0 && n <= 10)
        {
            sum = sum + n;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(count == 2)
            {
                break;
            }
    }
    printf("media = %.2f\n",sum / 2);


    return 0;
}
