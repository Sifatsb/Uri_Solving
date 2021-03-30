#include<stdio.h>

int main()
{
    int X, i, Y, sum = 0, temp;
    scanf("%d %d",&X,&Y);

    if(X < 0 || Y < 0)
    {

        for(i = X; i > Y; i--)
        {
            if(i %2 != 0)
            {
                sum = sum + i;
            }
        }
    }


    else if(X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;

        for(i = X; i < Y; i++)
        {
            if(i %2 != 0)
            {
                sum = sum + i;
            }
        }
    }



    else if(X < Y)
    {
        for(i = X; i < Y; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }
    }


    printf("%d\n",sum);

    return 0;
}
