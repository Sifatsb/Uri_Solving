#include<stdio.h>

int main()
{
    int p1, c1, p2, c2, r;
    scanf("%d %d %d %d",&p1, &c1, &p2, &c2);

    r = (p2 * c2) - (p1 * c1);

    if(r == 0)printf("0\n");

    else if(r > 0)printf("1\n");

    else if(r < 0)printf("-1\n");

    return 0;
}
