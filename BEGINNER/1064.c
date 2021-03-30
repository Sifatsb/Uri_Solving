#include<stdio.h>
int main()
{

    float j[6], avg = 0;
    int a = 0, i;

    for(i = 0; i < 6; i++)
    {
        scanf("%f",&j[i]);

        if(j[i] > 0){
            a++;
            avg = avg + j[i];
        }

    }
    printf("%d valores positivos\n",a);
    printf("%.1lf\n",avg / a);

    return 0;
}
