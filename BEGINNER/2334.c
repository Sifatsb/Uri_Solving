#include<stdio.h>

int main()
{
    unsigned long long int p;
    while(scanf("%llu",&p) != -1)
    {
        if(p == -1)
        {
            break;
        }
        if(p == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%llu\n",p-1);
        }
    }

    return 0;
}
