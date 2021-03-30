#include<stdio.h>
int main()
{
    int d = 0, a = 0, l = 0, p = 0;
	scanf("%d %d %d %d", &d, &a, &l, &p);

	if(d <= a && d <= l && d <= p) printf("S\n");
	 else printf("N\n");

    return 0;
}
