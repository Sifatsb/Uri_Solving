#include<stdio.h>
int main(){

    int X, Y;
    float i1, i2, i3, i4, i5;

    scanf("%d %d",&X,&Y);

    if(X == 1){
        i1 = Y * 4.00;
        printf("Total: R$ %.2f\n",i1);
    }
    if(X == 2){
        i2 = Y * 4.50;
        printf("Total: R$ %.2f\n",i2);
    }
    if(X == 3){
        i3 = Y * 5.00;
        printf("Total: R$ %.2f\n",i3);
    }
    if(X == 4){
        i4 = Y * 2.00;
        printf("Total: R$ %.2f\n",i4);
    }
    if(X == 5){
        i5 = Y * 1.50;
        printf("Total: R$ %.2f\n",i5);
    }

    return 0;
}
