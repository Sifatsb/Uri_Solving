#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    int i, n, l;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%s",name);
        l = strlen(name);

        if (l > 0 && l <= 25) printf("Y\n");

        else printf("N\n");
    }

    return 0;
}
