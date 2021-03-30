#include<stdio.h>
int main(){

    char name[30];
    float fs, ts,total;
    double TOTAL;

    gets(name);

    scanf("%f %f",&fs,&ts);

    total = (ts * 15)/100;
    TOTAL = (fs + total);

    printf("TOTAL = R$ %.2lf\n",TOTAL);


    return 0;
}
