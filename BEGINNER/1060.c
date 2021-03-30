#include<stdio.h>
int main()
{

    float j[6], avg = 1;
    int a = 0, i;

    for(i = 0; i < 6; i++)
    {
        scanf("%f",&j[i]);
        avg = avg + i;

        if(j[i] > -1.0){
            a++;


        }

    }
    printf("%d valores positivos\n",a);
    printf("%d\n",avg);

    return 0;
}
