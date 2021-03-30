#include<stdio.h>
int main()
{
    int a, b, c, n, t, i;

    while(scanf("%d",&a) && a!=0)
    {
        scanf("%d %d",&b, &c);

        n = (a * b * c) / (c - a);

        if(n > 1) printf("%d paginas\n",n);

        else printf("%d pagina\n",n);
    }

    return 0;
}
