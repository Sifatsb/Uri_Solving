#include<stdio.h>

int main()
{
    double A[100], x;
    int i;

    for(i = 0; i < 100; i++)
    {
        scanf("%lf",&x);
        if(x <= 10)
        {
            A[i] = x;
            printf("A[%d] = %.1lf\n",i,A[i]);
        }
    }


    return 0;
}
