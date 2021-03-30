#include<stdio.h>

int main()
{
    double m[12][12], sum = 0;
    int r, c, col;
    char t[2];

    scanf("%d %c",&col, &t);

    for(r = 0; r < 12; r++)
    {
        for(c = 0; c < 12; c++)
        {
            scanf("%lf",&m[r][c]);
        }
    }
    for(c = 0; c < 12; c++)
    {
        sum += m[c][col];
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
