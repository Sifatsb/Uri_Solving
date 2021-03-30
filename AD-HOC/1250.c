#include<stdio.h>
#include<string.h>

int main()
{
    char c;
    int i, j, k, l, m, n, t, count;
    scanf("%d",&t);

    for(i = 0; i < t; i++)
    {
        scanf("%d",&n);
        count =0;
        int a[n];
        char str[n+1];

        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%s%*c",&str);

        for(k = 0; k < n; k++)
            if(str[k]=='S')
            {
                if(a[k]<3) count++;
            }
            else
            {
                if(a[k]>2) count++;
            }
        printf("%d\n",count);
    }

    return 0;
}
