#include<stdio.h>

int main()
{
    int i, n, m;

    while(scanf("%d %d",&n, &m))
    {
        int num[m], num2[m], count = 0;
        if(n == 0 && m == 0)
        {
            break;
        }
        for(i = 0; i < m; i++)
        {
            scanf("%d",&num[i]);
            num2[i] =  num[i];
        }
        for(i = 0; i < m; i++)
        {
            if(num[i] == num2[i+1])
            {
                count++;
            }
        }
        printf("%d\n",count);

    }

    return 0;
}
