#include<stdio.h>
int main()
{
    int i, j, k, l, m, n, a, b, sum;

    while(1)
    {
        scanf("%d %d",&a, &b);

        if(a == 0 && b == 0)
            break;

        int arr[b][a];

        for(i = 0; i < b; i++)
        {
            for(j = 0; j < a; j++)
            {
                scanf("%d",&arr[i][j]);

            }

        }
        for(k = 0; k < a; k++)
        {
            sum = 0;
            for(l = 0; l < b; l++)
                sum += arr[l][k];
            {
                if(sum == b)
                {
                    printf("yes\n");
                    break;
                }
                else
                    sum = 0;
            }

        }
        if(sum == 0)
            printf("no\n");

    }

    return 0;
}
