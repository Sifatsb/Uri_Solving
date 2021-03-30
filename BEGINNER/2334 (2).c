#include<stdio.h>

int main()
{
    unsigned long long int n;

    while(1)
    {
        scanf("%lu",&n);
        if(n == -1) break;

        if(n == 0) printf("0\n");
        else printf("%lu\n",n-1);
    }

    return 0;
}
