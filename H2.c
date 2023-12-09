#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0||n==1)
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }

    return 0;
}
