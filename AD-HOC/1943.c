#include <stdio.h>

int main()
{
    int k;
    scanf("%d",&k);
    printf("Top ");

    if(k == 1) printf("1\n");

    else if(k > 1 && k <= 3) printf("3\n");

    else if(k > 3 && k <= 5) printf("5\n");

    else if(k > 5 && k <= 10) printf("10\n");

    else if(k > 10 && k <= 25) printf("25\n");

    else if(k > 25 && k <= 50) printf("50\n");

    else if(k > 50 && k <= 100) printf("100\n");

    return 0;
}
