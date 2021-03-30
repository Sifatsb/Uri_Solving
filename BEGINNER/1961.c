#include<stdio.h>

int main()
{
    int pn, ph, i, j, result = 0;
    scanf("%d %d",&ph, &pn);
    int a[pn], dif;

    for(i = 0, j = 1; i < pn; i++, j++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < pn - 1; i++)
    {
        dif = a[i+1] - a[i];
        if(dif < 0) dif *= -1;
        if(dif > ph)
        {
            result = 1;
            break;
        }
        else
        {
            result = 2;
        }
    }
    if(result == 2) printf("YOU WIN\n");
    else printf("GAME OVER\n");

    return 0;
}
