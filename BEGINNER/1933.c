#include<stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d %d",&a, &b);

    if(a > b)printf("%d\n",a);

    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
        printf("%d\n",a);
    }
    if(a == b)printf("%d\n",a);

    return 0;
}
