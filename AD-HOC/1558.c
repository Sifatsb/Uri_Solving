#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j, s, b;

    while(scanf("%d", &n) == 1)
    {
        b = 0;
        i = 0;
        j = sqrt(n);

        while(j >= i)
        {
            s = (i*i) + (j*j);

            if(s == n)
            {
                b = 2;
                break;
            }
            else if(s < n)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        if(b == 2) printf("YES\n");

        else printf("NO\n");
    }

    return 0;
}
