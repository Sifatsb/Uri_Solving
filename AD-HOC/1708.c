#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d\n", y/(y-x) + (y%(y-x) != 0));

    return 0;
}
