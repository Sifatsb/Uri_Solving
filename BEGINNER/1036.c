#include<stdio.h>
int main(){

    float a, b, c, x, y, z;
    scanf("%f %f %f",&a,&b,&c);
    x = (b * b) - (4 * a *c);

    if(x < 0) printf("Impossivel calcular\n");
    else if(a == 0) printf("Impossivel calcular\n");

    else{
        y = (-b + sqrt(x)) / (2 * a);
        z = (-b - sqrt(x)) / (2 * a);
        printf("R1 = %.5f\n",y);
        printf("R2 = %.5f\n",z);
    }

    return 0;
}
