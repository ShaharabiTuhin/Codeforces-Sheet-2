#include<stdio.h>
int main(){
    int i,x,y=1,ans;
    scanf("%d",&x);
    for(i=1;i<=12;i++)
    {
        ans=(x*y);
        printf("%d * %d = %d\n",x,y,ans);
        y++;

    }
    return 0;
}

