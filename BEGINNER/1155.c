#include<stdio.h>

int main()
{
    int i;
    float S = 0, s, up = 1.0, low = 1.0;

    for(i = 1; i <= 100; i++)
    {
        s = up / low;
        S = S + s;
        low++;
    }
    printf("%.2f\n",S);

    return 0;
}
