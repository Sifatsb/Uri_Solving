#include<stdio.h>
void print(int, int);

int a[100][100] = {0};

int main()
{
    int n = 9, i, j;
    while(n)
    {
        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
            if(a[i][i] == 0)
            {
                print(n,i+1);
            }
            else break;
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%3d",a[i][j]);
                a[i][j] = 0;
            }
            printf("\n");
        }
    }


    return 0;
}
void print(int n, int num)
{
    int i, j;
    for(i = num - 1,j = num -1; j < n - (num -1);j++) a[i][j] = num;
    for(i = n - (num - 1),j = num -1; j < n - (num -1);j++) a[i][j] = num;
    for(j = num -1,i = num -1; i < n - (num -1);i++) a[i][j] = num;
    for(j = n - (num -1),i = num -1; i < n - (num -1);i++) a[i][j] = num;

}
