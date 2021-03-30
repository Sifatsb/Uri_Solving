#include<stdio.h>
int main()
{
    int n, m, i, j = 0;

    while(scanf("%d %d",&n, &m) != EOF)
    {
        j = 0;
        while(m != 0)
        {
            j += m % 10;
            m = m / 10;
        }
        if(j % 3 == 0)
        {
            printf("%d sim\n",j);
        }
        else
        {
            printf("%d nao\n",j);
        }
    }

    return 0;
}
