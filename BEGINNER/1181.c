#include<stdio.h>

int main()
{
    double m[12][12], sum = 0;
    int r, c, row_n;
    char t[2];

    scanf("%d %s",&row_n, &t);

    for(r = 0; r < 12; r++)
    {
        for(c = 0; c < 12; c++)
        {
            scanf("%lf",&m[r][c]);
        }
    }
    for(r = 0; r < 12; r++)
    {
        sum = sum + m[row_n][r];
    }

    if(t[0] == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(t[0] == 'M')
    {
        printf("%.1lf\n",sum / 12);
    }

    return 0;
}
