#include<stdio.h>

int main()
{
    int n, x, y, i;
    float z;

    scanf("%d",&n);

    for(i = 1;i <= n; i++)
    {
        scanf("%d %d",&x, &y);
        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            z = (float)x / y;
            printf("%.1f\n",z);
        }
    }


    return 0;
}
