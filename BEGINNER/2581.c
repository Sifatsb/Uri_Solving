#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int tc, i;
    scanf("%d",&tc);
    getchar();

    for(i = 0; i < tc; i++)
    {
        gets(str);
        printf("I am Toorg!\n");
    }

    return 0;
}
