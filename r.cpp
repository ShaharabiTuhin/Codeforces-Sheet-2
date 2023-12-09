#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t,i,s;
    while(1){
        cin >> n >> m;
        if(n<=0 || m<=0)
            break;
        if(n>m){
            t=n;
            n=m;
            m=t;
        }
        for(i=n,s=0;i<=m;i++){
            cout << i << " ";
            s+=i;
        }cout << "sum =" << s << endl;
    }
}

