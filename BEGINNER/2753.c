#include<stdio.h>

int main()
{
    int s, i, k = 97;
    char c = 'a';

    for(i = k; i <= 122; i++)
    {
        printf("%d e %c\n",k++,c++);
    }

    return 0;
}
