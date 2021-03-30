#include<stdio.h>
int main()
{
    int a[200000]= {0}, i, n, m;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&m);
        a[m]++;
    }

    for(i = 1; i < 200000; i++)
    {
        if(a[i] > 0) printf("%d aparece %d vez(es)\n",i,a[i]);

    }
    return 0;
}
