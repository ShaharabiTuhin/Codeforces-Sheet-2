#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,s=0,n,a,b;
    cin >> n >> a >> b;
    for(i=1;i<=n;i++){
            //cout << i << endl;
        if(i%10>=a && i%10<=b){
            cout << i << endl;
            s+=i;
        }
    }cout << s ;
}
