#include<stdio.h>
int main(){

    double R, VOLUME;
    #define pi 3.14159

    scanf("%lf",&R);

    VOLUME = 4.0/3 * pi * R * R *R;

    printf("VOLUME = %.3lf",VOLUME);

    return 0;
}
