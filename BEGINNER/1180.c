#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d",&n);
    int x[n], min, pos;

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    min = x[0];

    for(i = 1; i < n; i++)
    {
        if(min > x[i])
        {
            min = x[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);

    return 0;
}
