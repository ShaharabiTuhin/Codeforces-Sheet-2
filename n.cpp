#include<bits/stdc++.h>
using namespace std;
int main(){
    char s;
    cin >> s ;
    int i,j,n,m[60];
    cin >> n ;
    for(i=0;i<n;i++)
        cin >> m[i];

    for(i=0;i<n;i++){
        for(j=0;j<m[i];j++){
            cout << s;
        }
        if(i!=n-1)
        cout << endl;
    }
}

