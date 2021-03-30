#include<stdio.h>

int main()
{
    int n, i, a = 0, g = 0, d = 0;

    for( ; ; )
    {

        scanf("%d",&n);
        if(n > 0 && n <= 4)
        {
            if(n == 1)
            {
                a++;
            }
            if(n == 2)
            {
                g++;
            }
            if(n == 3)
            {
                d++;
            }
            if(n == 4)
            {
                break;
            }
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}
