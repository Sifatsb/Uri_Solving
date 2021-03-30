#include<stdio.h>
int main()
{
    int i, j, k, n, x, y;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&x, &y);
        printf("%d\n",((x / 3)*(y / 3)));
    }

    return 0;
}
