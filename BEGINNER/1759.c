#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        printf("Ho");
        if(i == n)
        {
            printf("!\n");
        }
        if(i < n)
        {
            printf(" ");
        }
    }

    return 0;
}
