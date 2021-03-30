#include<stdio.h>
int main()
{
    float a, x, y;
    scanf("%f",&a);

    if(a >= 0 && a <= 400.00)
    {
     y = a * 15 / 100;
     x = a + y;
     printf("Novo salario: %.2f\n",x);
     printf("Reajuste ganho: %.2f\n",y);
     printf("Em percentual: 15 %%\n");

    }
    else if(a >= 400.01 && a <= 800.00)
    {
     y = a * 12 / 100;
     x = a + y;
     printf("Novo salario: %.2f\n",x);
     printf("Reajuste ganho: %.2f\n",y);
     printf("Em percentual: 12 %%\n");
    }
      else if(a >= 800.01 && a <= 1200.00)
    {
     y = a * 10 / 100;
     x = a + y;
     printf("Novo salario: %.2f\n",x);
     printf("Reajuste ganho: %.2f\n",y);
     printf("Em percentual: 10 %%\n");
    }
      else if(a >= 1200.01 && a <= 2000.00)
    {
     y= a * 7 / 100;
     x = a + y;
     printf("Novo salario: %.2f\n",x);
     printf("Reajuste ganho: %.2f\n",y);
     printf("Em percentual: 7 %%\n");
    }
      else if(a > 2000.00)
    {
     y = a * 4 / 100;
     x = a + y;
     printf("Novo salario: %.2f\n",x);
     printf("Reajuste ganho: %.2f\n",y);
     printf("Em percentual: 4 %%\n");
    }
    return 0;
}
