#include<stdio.h>

int main()
{
    int x, z, sum = 0, i, count = 0;
    scanf("%d %d",&x,&z);

    while(x >= z)
    {
        scanf("%d",&z);
    }
    for(i = 0; ;i++)
    {
        sum = sum + x + i;
        count++;
        if(sum > z)
        {
            break;
        }
    }
    printf("%d\n",count);

    return 0;
}
