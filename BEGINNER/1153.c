#include<stdio.h>

int main()
{
    int N, i, fac = 1, j;

    scanf("%d",&N);

    for(i = 1;i <= N; i++)
    {
        fac = fac * i;

    }
    printf("%d\n",fac);

    return 0;
}
