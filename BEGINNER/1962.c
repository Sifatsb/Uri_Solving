#include<stdio.h>

int main()
{
    int t, n, i;
    scanf("%d",&t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d",&n);

        if(n == 2015)
        {
            printf("1 A.C.\n");
        }
        else if(n > 2015)
        {
            printf("%d A.C.\n",n - 2014);
        }
        else if(n < 2015)
        {
            printf("%d D.C.\n",2015 - n);
        }

    }

    return 0;
}
