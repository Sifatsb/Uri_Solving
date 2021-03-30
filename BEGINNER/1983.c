#include<stdio.h>

int main()
{
    int t, i, in_id;
    scanf("%d",&t);
    int id[t];
    float note[t], max = 0.0;

    for(i = 0; i < t; i++)
    {
        scanf("%d %f",&id[i], &note[i]);
        if(note[i] > max)
        {
            max = note[i];
            in_id = i;
        }
    }
    if(max < 8) printf("Minimum note not reached\n");

    else printf("%d\n",id[in_id]);

    return 0;
}
