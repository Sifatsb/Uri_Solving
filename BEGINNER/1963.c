#include<stdio.h>

int main()
{
    float a, b, increase;
    scanf("%f %f",&a, &b);

    increase = ((100.0 / a) * (b - a));

    printf("%.2f%%\n",increase);


    return 0;
}
