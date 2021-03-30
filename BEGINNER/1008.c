#include<stdio.h>
int main(){

    int n, h;
    double ts;
    float s;

    scanf("%d %d",&n,&h);
    scanf("%f",&s);
    printf("NUMBER = %d\n",n);

    ts = (h * s);

    printf("SALARY = U$ %.2f\n",ts);



    return 0;
}
