#include <stdio.h>
#include <string.h>

int main()
{
    int test, i;
    char str[10], str2[10];
    scanf("%d", &test);

    for(i = 1; i <= test; i++)
    {
        scanf("%s %s", str, str2);

        if(str[1]=='e' && str2[1]=='e')
        {
            printf("Sem ganhador\n");
        }

        else if(str[1]=='t' && str2[1]=='t')
        {
            printf("Aniquilacao mutua\n");
        }

        else if(str[1]=='a' && str2[1]=='a')
        {
            printf("Ambos venceram\n");
        }

        else if(str[1]=='t' || (str[1]=='e' && str2[1]=='a'))
        {
            printf("Jogador 1 venceu\n");
        }

        else
        {
            printf("Jogador 2 venceu\n");
        }
    }
    return 0;
}
