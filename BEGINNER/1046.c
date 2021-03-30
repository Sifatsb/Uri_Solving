#include<stdio.h>
int main()
{
    int a, b, res, res2;
    scanf("%d %d",&a, &b);

    if(a == b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
        if(b > a){
            res = b - a;
            printf("O JOGO DUROU %d HORA(S)\n",res);
        }
        else if(a > b){
            res2 = (24 - (a - b));
            printf("O JOGO DUROU %d HORA(S)\n",res2);
        }
    }

    return 0;
}
