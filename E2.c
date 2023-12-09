#include<stdio.h>
#include<math.h>
int main(){
    int n,i,c,max=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c);

        if(max<c)
        {
            max=c;
        }
    }
    printf("%d\n",max);
    return 0;
}
