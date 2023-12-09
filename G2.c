#include<stdio.h>
int main(){
    long long int N,T,i,j,fac;
    scanf("%lld",&N);
    for(i=1;i<=N;i++)
    {
        fac=1;
        scanf("%lld",&T);
        for(j=1;j<=T;j++)
        {
            fac=fac*j;
        }
        printf("%lld\n",fac);
    }

    return 0;
}
