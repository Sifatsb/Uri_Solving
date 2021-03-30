#include<stdio.h>

int main()
{
    int i, tc, menu, quan, code;
    float price;
    scanf("%d",&tc);

    for( i = 0; i < tc; i++)
    {
        scanf("%d %d",&code, &quan);
        if(code == 1001)
        {
            price += quan * 1.50;
        }
        else if(code == 1002)
        {
            price += quan * 2.50;
        }
        else if(code == 1003)
        {
            price += quan * 3.50;
        }
        else if(code == 1004)
        {
            price += quan * 4.50;
        }
        else if(code == 1005)
        {
            price += quan * 5.50;
        }
    }
    printf("%.2f\n",price);

    return 0;
}
