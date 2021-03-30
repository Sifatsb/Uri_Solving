#include<stdio.h>
int main()
{
    int a, b = 0, c = 0, d, e, f, t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&a);
        if(a == 0)
        {
            b++;
        }

        if(a == 1)
        {
            c++;
        }
    }
    if(b > c)printf("Y\n");
    else printf("N\n");

    return 0;
}
