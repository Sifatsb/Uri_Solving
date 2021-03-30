#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n == 61){
        printf("Brasilia\n");
    }
    else if(n == 71){
        printf("Salvador\n");
    }

    else if(n == 11){
        printf("Sao Paulo\n");
    }
    else if(n == 21){
        printf("Rio de Janeirio\n");
    }
    else if(n == 32){
        printf("juiz de Fora\n");
    }
    else if(n == 19){
        printf("Campinas\n");
    }
    else if(n == 27){
        printf("Vitoria\n");
    }
    else if(n == 31){
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }
    return 0;
}
