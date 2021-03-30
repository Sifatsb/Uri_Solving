#include<stdio.h>

int main()
{
    int X, i, j;

    for(i = 1; i != 0; i++)
    {
        scanf("%d",&X);
        if(X == 0)
        {
            break;
        }
        else
        {
            for(j = 1; j <= X; j++)
            {
                printf("%d",j);
                if(j != X)
                {
                    printf(" ");
                }
                if(j == X)
                {
                    printf("\n");
                }
            }
        }

    }

    return 0;
}
