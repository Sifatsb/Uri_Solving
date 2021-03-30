#include<stdio.h>

int main()
{
    int X, Y, i, count = 0;
    scanf("%d %d",&X,&Y);

    if(1 < X && X < 20 && X < Y && Y < 100000)
    {
        for(i = 1; i <= Y; i++)
        {
            count++;
            if(count % X == 0)
            {
                printf("%d",i);
                printf("\n");
            }
            else
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}
