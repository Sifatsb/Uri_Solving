#include<stdio.h>

int main()
{
    int n,i,com = 0, pos = 0;

    for(i =1; i <= 100; i++)
    {
        scanf("%d",&n);

        if(n > com)
        {
            com = n;
            pos = i;
        }
    }
    printf("%d\n%d\n",com, pos);

    return 0;
}
