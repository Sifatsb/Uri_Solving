#include<stdio.h>

int main()
{
    int tc, x, y, i;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d",&x, &y);
        printf("%d cm2\n",(x*y)/2);
    }

    return 0;
}
