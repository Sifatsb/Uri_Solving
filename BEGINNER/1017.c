#include<stdio.h>
int main(){

    int a, b;
    float c;

    scanf("%d %d",&a, &b);

    c = (a * b) / 12.0;

    printf("%.3f\n",c);

    return 0;
}
