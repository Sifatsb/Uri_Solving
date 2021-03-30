#include<stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n))
    {
        if(n != 2002)
        {
            printf("Senha Invalida\n");
        }
        else if(n == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
