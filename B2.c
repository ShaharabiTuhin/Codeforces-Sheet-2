#include<stdio.h>
int main(){
    int n,j=0,i;
    scanf("%d",&n);
    if(n<2)
    {
        printf("-1\n");
    }else if(n%2==0)
    {
        for(i=1;i<=n;i++)
       {
        j=j+2;
        printf("%d\n",j);
        if(n==j)
            break;
       }
    }else{
        for(i=1;i<=n;i++)
        {
            j=j+2;
            printf("%d\n",j);
            if(j==n-1)
                break;
        }
    }
    return 0;
}

