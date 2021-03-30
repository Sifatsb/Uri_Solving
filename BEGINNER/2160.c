#include<stdio.h>
#include<string.h>

int main()
{
    char str[550];
    int ln = 1;

    gets(str);
    ln = strlen(str);

    if(ln <= 80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
