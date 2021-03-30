#include<stdio.h>
int main(){

    int a, b, c, d, e, f, temp;
    scanf("%d %d %d",&a, &b, &c);

    d = a;
    e = b;
    f = c;

    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",d,e,f);
    return 0;
}
