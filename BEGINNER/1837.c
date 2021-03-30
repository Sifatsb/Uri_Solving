#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;

    scanf("%d %d", &a, &b);

    if(a < 0)
    {
        e = b;
        if(b < 0) e = b * - 1;
        for(h = 0; h < e; h++)
        {
            f = a - h;
            if(f % b == 0) break;
        }
        g=f/b;
    }
    else
    {
        g = a / b;
        h = a % b;
    }
    printf("%d %d\n",g, h);

    return 0;
}
