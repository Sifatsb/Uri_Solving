#include<stdio.h>

int main()
{
    int i, n;
    char sen[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("%c",sen[i]);
    }
    printf("\n");

    return 0;
}
