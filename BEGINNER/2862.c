#include<stdio.h>

int main()
{
    int i, tc, n;
    scanf("%d",&tc);

    for(i = 0; i < tc; i++)
    {
        scanf("%d",&n);
        if(n <= 8000)
        {
            printf("Inseto!\n");
        }
        else
        {
            printf("Mais de 8000!\n");
        }
    }

    return 0;
}
