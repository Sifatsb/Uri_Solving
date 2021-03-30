#include<stdio.h>
int main()
{

    int X, Y, i, sum = 0, temp;

    scanf("%d %d",&X, &Y);

    if( X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }

    for(i = X; i <= Y; i++)
    {
        if(i % 13 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
