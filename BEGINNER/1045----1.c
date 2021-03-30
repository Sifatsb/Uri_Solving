#include<stdio.h>
int main(){

    float A, B, C;
    scanf("%lf %lf %lf",&A, &B, &C);
    if(A > B && A > C && A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
            if(A > B && A > C && A * A == B * B + C * C){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(A > B && A > C  && A * A > B * B + C * C){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(A > B && A > C  && A * A < B * B + C * C){
                printf("TRIANGULO ACUTANGULO\n");
            }
            else if(A == B == C){
                printf("TRIANGULO EQUILATERO\n");
            }
            else if(A == B && B == C && A == C){
                printf("TRIANGULO ISOSCELES\n");
            }
    }
    return 0;
}
