#include<stdio.h>
#include<string.h>

int main()
{
    char str[550];
    int ln = 1;

    gets(str);
    ln = strlen(str);

    if(ln <= 140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }

    return 0;
}
