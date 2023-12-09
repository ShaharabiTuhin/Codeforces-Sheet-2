#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,f=0;
    cin >> n;
    for(i=2;i<=n;i++){
        f=0;
        for(j=2;j<i;j++){
            if(i%j==0)
            f=1;
        }
    if(f==0)
            cout << i << " ";
    }
}

