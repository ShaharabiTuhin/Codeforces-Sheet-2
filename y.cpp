#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,a[50];
    cin >> n;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++){
        cout << a[i] << " " ;
    }
}

