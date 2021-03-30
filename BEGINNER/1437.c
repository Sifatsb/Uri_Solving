#include<stdio.h>
int main()
{
    int test, n, i;
    while(1)
    {
        scanf("%d",&test);
        if(test==0)
        {
            break;
        }
        while(test!=0)
        {
            char ch[test+1];
            scanf("%s",ch);

            for(i = 0, n = 1; ch[i] != '\0'; i++)
            {
                if(ch[i] == 'D')
                {
                    n++;
                    if(n > 4)
                    {
                        n = 1;
                    }
                }
                else
                {
                    n--;
                    if(n==0)
                    {
                        n = 4;
                    }
                }
            }
            if(n == 1)
            {
                printf("N\n");
            }
            else if(n == 2)
            {
                printf("L\n");
            }
            else if(n == 3)
            {
                printf("S\n");
            }
            else if(n == 4)
            {
                printf("O\n");
            }
            test = 0;
        }
    }
}
