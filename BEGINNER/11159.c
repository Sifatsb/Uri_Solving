#include<stdio.h>

int main()
{
    int x, i, sum = 0, count = 0;


    while(scanf("%d",&x))
    {
        for(i = x; i != 0; i++)
        {
            if(x == 0)
            {
                break;
            }
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
    }
    printf("%d\n",sum);

    return 0;
}
