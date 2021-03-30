#include<stdio.h>
int main()
{
    int a[5], i, b = 0;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);

        if(a[i] % 2 == 0)
        {
            b++;
        }
    }
    printf("%d valores pares\n",b);

    return 0;
}
