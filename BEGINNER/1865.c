#include<stdio.h>
#include<string.h>

int main()
{
    int tc, i, n;
    char str[50];
    scanf("%d",&tc);

    for(i = 0; i < tc; i++)
    {
        scanf("%s %d",str,&n);

        if(!strcmp(str, "Thor"))
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
