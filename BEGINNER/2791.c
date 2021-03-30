#include<stdio.h>

int main()
{
    int c[4], i, p = 0;
    for(i = 0; i < 4; i++)
    {
        scanf("%d",&c[i]);
        if(c[i] == 1)
        {
            p = i+1;
        }
    }
    printf("%d\n",p);

    return 0;
}
