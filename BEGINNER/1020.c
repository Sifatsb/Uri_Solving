#include<stdio.h>
int main(){

    int x;
    scanf("%d",&x);

    printf("%d ano(s)\n",x / 365);
    x = x % 365;

    printf("%d mes(es)\n",x / 30);
    x = x % 30;

    printf("%d dia(s)\n",x);

    return 0;
}
