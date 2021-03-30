#include<stdio.h>

int main()
{
    int n, i, c1 = 1, c2 = 2, c3 = 3;
    scanf("%d",&n);

    for(i = 1;i <= n; i++)
    {
        printf("%d %d %d PUM\n",c1,c2,c3);
        c1+= 4;
        c2+= 4;
        c3+= 4;
    }

    return 0;
}
