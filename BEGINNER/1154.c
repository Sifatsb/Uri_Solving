#include<stdio.h>

int main()
{
    int n, i, sum = 0, count = 0;
    float avg;

    while(scanf("%d",&n))
    {
        if(n > 0)
        {
            sum = sum + n;
            count++;
        }
        if(n < 0)
        {
            break;
        }
    }
    avg = (float)sum / count;
    printf("%.2f\n",avg);

    return 0;
}
