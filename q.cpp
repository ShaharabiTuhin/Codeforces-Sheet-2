#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    char s[10000];
    int i,n,t;
    cin >> t;
    while(t--)
    {
        scanf(" %s",s);;
        n=strlen(s);
        for(i=n-1; i>=0; i--)
        {
            cout << s[i] << " " ;
        }
        cout << endl;
    }
}
