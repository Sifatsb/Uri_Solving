#include<stdio.h>
int main()
{
    int x, y, Y, X, p, q, tc;
    scanf("%d",&tc);

    while(tc--)
    {
        p = 0;
        q = 0;
        scanf("%d",&x);
        getchar();
        getchar();

        scanf("%d",&y);
        scanf("%d",&Y);

        getchar();
        getchar();
        scanf("%d",&X);

        p = x + X;
        q = Y + y;
        {
            if(p > q)
                printf("Time 1\n");

            else if(p == q && X > y)printf("Time 1\n");

            else if(p == q && x == Y && y == X)printf("Penaltis\n");

            else printf("Time 2\n");
        }
    }

    return 0;
}
