#include<stdio.h>

int main()
{
    float i, j;
    int k, l;
    for(i = 0; i < 2.1; i+=.2)
    {
        for(j = 1; j <= 3; j++)
        {
            if(i > 0 && i < 1 || i > 1 && i < 2)
            {
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
            else
            {
                k = i;
                l = j + i;
                printf("I=%d J=%d\n",k,l);
            }

        }
    }

    return 0;
}
