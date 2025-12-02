#include <bits/stdc++.h>        //1850A
using namespace std;

int main(){
    int t,l;
    cin>>t;
    for ( l = 0; l < t; l++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)>=10 || (b+c)>=10 || (a+c)>=10)
            cout<<"YES\n";
        else
            cout<<"NO\n";  
    }
    return 0;
}