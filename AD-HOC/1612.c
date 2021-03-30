#include<stdio.h>
int main()
{
    int i, a, c;
    long long int r;
    scanf("%d",&a);

    for(i = 0; i < a; i++)
    {
        scanf("%lld",&r);
        if(r == 1)
        {
            c = 1;
            printf("%d\n",c);
        }

        else if(r % 2 == 0)
        {
            c = r / 2;
            printf("%d\n",c);
        }

        else
            printf("%lld\n",r/2+1);
    }

    return 0;
}
