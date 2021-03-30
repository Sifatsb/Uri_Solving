#include<stdio.h>
int main()
{
    int i, j, k, l, n, m;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);

        for(j = 0; j < m; j++)
        {
            scanf("%d",&k);

            if(k == 1)printf("Rolien\n");

            else if(k == 2)printf("Naej\n");

            else if(k == 3)printf("Elehcim\n");

            else printf("Odranoel\n");
        }
    }

    return 0;
}
