#include<stdio.h>

int main()
{
    double x , n[100];
    int i;
    scanf("%lf",&x);
    n[0] = x;

    for(i = 1; i < 100; i++)
    {
        n[i] = x = x / 2;
    }
    for(i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n",i,n[i]);
    }

    return 0;
}
