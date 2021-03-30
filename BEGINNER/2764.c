#include<stdio.h>

int main()
{
    int d, m, y;
    char c, c1;

    scanf("%d",&d);
    scanf("%c",&c);
    scanf("%d",&m);
    scanf("%c",&c1);
    scanf("%d",&y);

    printf("%d/%d/%d\n",m, d, y);
    printf("%d/%d/%d\n",y, m, d);
    printf("%d-%d-%d\n",d, m, y);

    return 0;
}
