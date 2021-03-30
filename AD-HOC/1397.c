#include<stdio.h>

int main()
{
    int n, x, y, i, k, l;

    while(scanf("%d",&n) && n!=0)
    {
        k = 0;
        l = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d %d",&x, &y);
            if(x > y) k++;
            else if(y > x) l++;
        }
        printf("%d %d\n",k,l);
    }
    return 0;
}
