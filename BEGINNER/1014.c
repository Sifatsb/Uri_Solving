#include<stdio.h>
int main(){

    int X;
    float Y, d;

    scanf("%d %f",&X,&Y);
    d = X / Y;

    printf("%.3f km/l\n",d);

    return 0;
}
