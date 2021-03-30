#include<stdio.h>

int main()
{
    double a[12][12], sum = 0;
    int i, j;
    char t[2];
    scanf("%c",&t);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf",&a[i][j]);
            if(i < j)
            {
                sum = sum + a[i][j];
            }
        }
    }

    if(t[0] == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(t[0] == 'M')
    {
        printf("%.1lf\n",sum / 66);
    }

    return 0;
}
