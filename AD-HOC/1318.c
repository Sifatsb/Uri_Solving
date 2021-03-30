#include<stdio.h>
#include<string.h>

int main()
{
    int n, m, count, i, j, k, l, arr[1000];

    while(scanf("%d %d",&n, &m) && n != 0 && m != 0)
    {
        memset(arr, 0, sizeof(arr));
        count = 0;

        for(i = 0; i < m; ++i)
        {
            scanf("%d",&k);
            arr[k]++;
            if(arr[k] == 2)
                count++;

        }
        printf("%d\n",count);
    }
    return 0;
}
