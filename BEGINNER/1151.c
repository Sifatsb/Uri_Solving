#include<stdio.h>

int main()
{
    int N, i, t1 = 0, t2 = 1, next_term;
    scanf("%d",&N);

    if(0 < N && N < 46)
    {
        for(i = 1; i <= N; i++)
        {
            printf("%d",t1);
            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;

            if(i != N)
            {
                printf(" ");

            }
            if(i == N)
            {
                printf("\n");
            }
        }

    }

    return 0;
}
