#include<stdio.h>
int main()
{
    int a, b, c, d, hour, min;

    scanf("%d %d %d %d",&a, &b, &c, &d);

    hour = c - a;
    min = d - b;

    if(hour < 0)
    {
        hour = hour + 24;
    }
    if(hour == 0 && min == 0)
    {
        hour = hour + 24;
    }
    else if(min < 0)
    {
        min = min + 60;
        hour = hour - 1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour, min);

    return 0;
}
