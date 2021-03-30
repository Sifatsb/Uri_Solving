#include<stdio.h>

int main()
{
    int t, r1, r2, i;
    scanf("%d",&t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d %d",&r1, &r2);

        printf("%d\n",r1+r2);
    }

    return 0;
}
