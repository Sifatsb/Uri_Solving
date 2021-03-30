#include<stdio.h>

int main()
{
    int t, i, j = 0, n[1000];
    scanf("%d",&t);

    if(2 <= t && t <= 50)
    {
        for(i = 0; i < 1000; i++)
        {
            printf("N[%d] = %d\n",i,j++);
            if(j == t)
            {
                j = 0;
            }
        }
    }

    return 0;
}
