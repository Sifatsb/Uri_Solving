#include<stdio.h>
int main(){

    float A, B, C, peri, area;
    scanf("%f %f %f",&A, &B, &C);

    if(A + B > C && B + C > A && C + A > B){
        peri = (A + B + C);
        printf("Perimetro = %.1f\n",peri);
    }
    else{
        area = ((A + B) * C) / 2;
        printf("Area = %.1f\n",area);
    }

    return 0;
}


