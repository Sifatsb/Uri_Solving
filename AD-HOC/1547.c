#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t-->0)
    {
        int i, n, num;
        scanf("%d %d",&n, &num);

        int c[n];
        for(i = 0; i < n; i++)
        {
            int z;
            scanf("%d",&z);

            if(z > num)
            {
                c[i] = z-num;

            }
            else
            {
                c[i] = num - z;
            }
        }
        int r, l = c[0];
        for(i = 1; i < n; i++)
        {

            if(c[i] < l)
            {
                l = c[i];
            }
        }
        for(i = 0; i < n; i++)
        {
            if(c[i] == l)
            {
                r = i;
                break;
            }
        }

        printf("%d\n",r+1);
    }

    return 0;
}
