#include<stdio.h>

int main()
{
    int x, i, sum, count;

    while(scanf("%d",&x))
    {
        sum = 0;
        count = 0;
        if(x == 0)
        {
            break;
        }
        for(i = x; ; i++)
        {
            if(i % 2 == 0)
            {
                sum = sum + i;
                count++;
                if(count == 5)
                {
                    break;
                }
            }

        }
        printf("%d\n",sum);

    }

    return 0;
}
