#include<stdio.h>
int main()
{
    int n;
    float a, b, c, avg;

    scanf("%d",&n);

    n = 1;

    while(n)
    {
        scanf("%f %f %f",&a, &b, &c);

        avg = ((a * 2) + (b * 3) + (c * 5)) / 10;

        printf("%.1f\n",avg);

        n++;

    }

    return 0;
}
