#include<stdio.h>
#include<string.h>
int main()
{
    char str[2000];
    for(;;){
     gets(str);
     if (str[0]=='*') break;
     else{
        int l,i,j,x=1;
        char a[5];
        l=strlen(str);
        if(str[0]>=65 && str[0]<=90) a[0]=str[0]+32;
        else if(str[0]>=97 && str[0]<=122) a[0]=str[0]-32;
        for(i=1;i<=l;i++){
            if(str[i]==' ')
            {
                if(str[i+1]==str[0] || str[i+1]==a[0]) continue;
                else {x=0; break;
                }

            }
        }
        if (x==1) printf("Y\n");
        else printf("N\n");
     }
    }

    return 0;
}
