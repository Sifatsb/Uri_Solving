#include<stdio.h>
#include<math.h>

int main()
{
    int N, i, n;
    scanf("%d",&N);

    for(i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            n = pow(i,2);
            printf("%d^2 = %d\n",i,n);
        }
    }

    return 0;
}
