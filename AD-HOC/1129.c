#include<stdio.h>

int main()
{
    int n, a, b, c, d, e, m, i, j, t, k;

    while(scanf("%d",&n) && n != 0)
    {
        for(i = 0; i < n; i++)
        {
            c = 0;
            for(j = 1; j <= 5; j++)
            {
                scanf("%d",&b);

                if(b <= 127)
                {
                    t=j;
                    c++;
                }
            }


            if(c > 1 || c == 0) printf("*\n");
            else
            {
                if(t == 1)printf("A\n");
                else if(t == 2)printf("B\n");
                else if(t == 3)printf("C\n");
                else if(t == 4)printf("D\n");
                else printf("E\n");
            }
        }
    }
    return 0;
}
