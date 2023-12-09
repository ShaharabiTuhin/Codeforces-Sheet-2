#include<stdio.h>
int main(){
    int i,N,x,e=0,o=0,p=0,n=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            e++;
        }if(x%2!=0)
        {
            o++;
        }if(x>0)
        {
            p++;
        }if(x<0)
        {
            n++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,n);

    return 0;
}
