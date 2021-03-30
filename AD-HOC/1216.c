#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    long long d, count = 0;
    double sum = 0.0;

    while(scanf("%[^\n]",&str)!=EOF)
    {
        scanf("%*c%lld%*c",&d);
        sum += d;
        count++;

    }
    printf("%.1lf\n",sum / (float)count);

    return 0;
}
