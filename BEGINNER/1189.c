#include<stdio.h>

int main()
{
    double m[12][12], sum = 0;
    int i, j;
    char o[2];
    scanf("%c",&o);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf",&m[i][j]);

            if(i > j && i + j <= 10)
            {
                sum += m[i][j];
            }
        }
    }
    if(o[0] == 'S')
    {
        printf("%.1lf\n",sum);
    }
    if(o[0] == 'M')
    {
        printf("%.1lf\n",sum / 30);
    }

    return 0;
}
