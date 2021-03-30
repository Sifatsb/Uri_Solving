#include<stdio.h>

int main()
{
    int n[20], y, i, temp, j = 19;

    for(i = 0; i < 20; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i = 0; i < 20/2; i++)
    {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        j--;

    }
    for(j = 0; j < 20; j++)
    {
        printf("N[%d] = %d\n",j,n[j]);
    }

    return 0;
}
