#include<stdio.h>
#include<math.h>

int main()
{
int a, b, c, d, k, l;

while(scanf("%d %d %d",&a, &b, &c) && a != 0 && b != 0 && c != 0)
    {
    k = (a * b * c);
    l = cbrt(k);
    printf("%d\n",l);
}


return 0;}
