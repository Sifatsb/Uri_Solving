#include<stdio.h>

int main()
{
    int N, i, a, b;

    scanf("%d",&N);

    if(1 < N && N < 1000)
    {
        for(i = 1; i <= N; i++)
        {
            printf("%d %d %d\n",i, i * i, i * i *i);
        }
    }

    return 0;
}
