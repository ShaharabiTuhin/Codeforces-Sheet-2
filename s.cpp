#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum,x,y,t,T;
    cin >> T;
    while(T--){
    sum=0;
    cin >> x >> y;
    if(x > y){
            t=x;
            x=y;
            y=t;
        }
        for(i=x+1; i<y; i++)
        {
            if(i%2!=0)
                sum+=i;

        }
        cout << sum << endl ;
    }
}
