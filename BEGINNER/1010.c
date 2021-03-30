#include<stdio.h>
int main(){

    int code1, code2, pro1, pro2;
    float pri1, pri2, tp;
    scanf("%d %d %f",&code1,&pro1, &pri1);
    scanf("%d %d %f",&code2,&pro2, &pri2);


    tp = (pro1 * pri1) + (pro2 * pri2);


    printf("VALOR A PAGAR: R$ %.2f\n",tp);

    return 0;
}
