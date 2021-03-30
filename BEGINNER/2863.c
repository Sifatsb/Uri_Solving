#include<stdio.h>

int main()
{
    int tc, low, i;

    int n[tc];
    low = n[0];
    scanf("%d",&tc);
    for(i = 1; i <= tc; i++)
    {
        scanf("%d",&n[i]);
        if(n[i] < low)
        {
            low = n[i];
        }
    }
    printf("%d\n",low);


    /*while(scanf("%d",&tc) != EOF)
    {
        int n[tc];
        low = n[0];
        for(i = 1; i <= tc; i++)
        {
            scanf("%d",&n[i]);
            if(n[i] < low)
            {
                low = n[i];
            }
        }
        printf("%d\n",low);
    }*/

    return 0;
}
