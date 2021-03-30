#include<stdio.h>

int main()
{

    int h1,m1,h2,m2,s1,s2,s;
    while(1)
    {

        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0) break;

        s1=h1*60+m1;
        s2=h2*60+m2;
        s=s2-s1;

        if (s > 0) printf("%d\n",s);

        else if (s < 0) printf("%d\n",1440+s);

        else if (h1 <= 0 || h2 <= 0)
        {
            h1=1440+h1;
            h2=1440+h2;

            printf("%d\n",s);
        }

    }
    return 0;
}
