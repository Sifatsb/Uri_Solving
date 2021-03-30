#include<stdio.h>
#include<string.h>

int main()
{
    int i, tc, ln = 0;
    float a;
    char str[10000];
    scanf("%d",&tc);

    for(i = 0; i < tc; i++)
    {
        scanf("%s",str);
        ln = strlen(str);
        a = ln / 100.0;
        printf("%.2f\n",a);
    }

    return 0;
}
