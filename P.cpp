#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m=1;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            cout << "*";
        }
        if(i!=n-1)
            cout << endl;
    }
}
