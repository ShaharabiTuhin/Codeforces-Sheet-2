#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,x=1;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=1;j<=3;j++){
            cout << x << " ";
            x++;
        }x++;
        cout << "PUM" << endl;
    }
}
