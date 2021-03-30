#include<stdio.h>
int main()
{
    char c;
    int n, a, b, i;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
        {
        scanf("%d %c %d",&a, &c, &b);

        if(a == b) printf("%d\n",a*b);

        else if(c >= 65 && c <= 90) printf("%d\n",b-a);

        else printf("%d\n",b+a);
    }


    return 0;
}
