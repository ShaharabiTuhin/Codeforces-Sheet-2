#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m=1,o;
    cin >> n;
    o=n+2;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            cout << " ";
        }
        for(k=0;k<m;k++){
            cout << "*";
        }m+=2;
        if(i!=n-1)
            cout << endl;
    }
    for(i=0;i<n;i++){
        cout << endl;
        for(j=0;j<i;j++){
            cout << " ";
        }
        for(k=m-2;k>0;k--){
            cout << "*";
        }m-=2;
    }
}
