#include<stdio.h>

int main()
{
    int i, j, y, t, n;

    while(scanf("%d",&n)!=EOF)
    {
        t = 0;
        j = 0;

        for(i = 0; i < 60; i++)
        {
            if(i % 5 == 0)
            {
                j++;
            }
            y = i * 6 - j * 6;

            if(n == y || n == -y)
            {
                t = 1;
                break;
            }
        }
        if(t == 1) printf("Y\n");

        else printf("N\n");
    }


    return 0;
}
