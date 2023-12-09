#include<stdio.h>
int main(){
    int i,n,f=0;
    scanf("%d",&n);
        for(i=2;i<n;i++)
        {
            if(n%i==0||n%i==1)
            {
                //printf("%d ",i);
            }else{
                printf("%d ",i);
            }
        }
    return 0;
}
