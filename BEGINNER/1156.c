#include<stdio.h>

int main()
{
    int i;
    float S = 0, s, up = 1.0, low = 1.0;

    for(i = 1; i <= 39; i++)
    {
        s = up / low;
        S = S + s;

        up = up + 2;
        low = low * 2;
    }
    printf("%.2f\n",S);

    return 0;
}
